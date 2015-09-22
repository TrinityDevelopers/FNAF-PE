#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include <Substrate.h>

#include "mcpe/client/renderer/entity/EntityRenderDispatcher.h"

#include "fnaf/common/entity/foxy/FoxyRenderer.h"
#include "fnaf/common/entity/foxy/FoxyModel.h"


#define LOG_TAG "fnafpe"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))

class MinecraftClient;


static void (*_EntityRenderDispatcher$EntityRenderDispatcher)(EntityRenderDispatcher*, MinecraftClient&);
static void EntityRenderDispatcher$EntityRenderDispatcher(EntityRenderDispatcher* self, MinecraftClient& client)
{
	_EntityRenderDispatcher$EntityRenderDispatcher(self, client);
	self->entityRenderers[14] = new FoxyRenderer(new FoxyModel(), 0);
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	void* handle = dlopen("libminecraftpe.so", RTLD_LAZY);
	void* bl_handle = dlopen("libmcpelauncher.so", RTLD_LAZY);
	
	void* EntityRenderDispatcher$EntityRenderDispatcher = dlsym(handle, "_ZN22EntityRenderDispatcherC2ER15MinecraftClient");
	
	MSHookFunction(EntityRenderDispatcher$EntityRenderDispatcher, (void*) &EntityRenderDispatcher$EntityRenderDispatcher, (void**) &_EntityRenderDispatcher$EntityRenderDispatcher);
	
	return JNI_VERSION_1_2;
}
