/*
 * Copyright 2013  Rinat Ibragimov
 *
 * This file is part of libvdpau-va-gl
 *
 * libvdpau-va-gl distributed under the terms of LGPLv3. See COPYING for details.
 */

#ifndef VDPAU_SOFT_H_
#define VDPAU_SOFT_H_

#include <GL/glx.h>
#include <vdpau/vdpau.h>
#include <va/va.h>
#include "handle-storage.h"

/** @brief VdpDevice object parameters */
typedef struct {
    HandleType  type;               ///< common type field
    void       *self;               ///< link to device. For VdpDeviceData this is link to itself
    int         refcount;
    Display    *display;            ///< own X display connection
    Display    *display_orig;       ///< supplied X display connection
    int         screen;             ///< X screen
    GLXContext  root_glc;           ///< master GL context
    Window      root;               ///< X drawable (root window) used for offscreen drawing
    VADisplay   va_dpy;             ///< VA display
    int         va_available;       ///< 1 if VA-API available
    int         va_version_major;
    int         va_version_minor;
    GLuint      watermark_tex_id;   ///< GL texture id for watermark
} VdpDeviceData;


VdpStatus
softVdpDeviceCreateX11(Display *display, int screen, VdpDevice *device,
                       VdpGetProcAddress **get_proc_address);

VdpGetApiVersion softVdpGetApiVersion;
VdpDecoderQueryCapabilities softVdpDecoderQueryCapabilities;
VdpDecoderCreate softVdpDecoderCreate;
VdpDecoderDestroy softVdpDecoderDestroy;
VdpDecoderGetParameters softVdpDecoderGetParameters;
VdpDecoderRender softVdpDecoderRender;
VdpOutputSurfaceQueryCapabilities softVdpOutputSurfaceQueryCapabilities;
VdpOutputSurfaceQueryGetPutBitsNativeCapabilities softVdpOutputSurfaceQueryGetPutBitsNativeCapabilities;
VdpOutputSurfaceQueryPutBitsIndexedCapabilities softVdpOutputSurfaceQueryPutBitsIndexedCapabilities;
VdpOutputSurfaceQueryPutBitsYCbCrCapabilities softVdpOutputSurfaceQueryPutBitsYCbCrCapabilities;
VdpOutputSurfaceCreate softVdpOutputSurfaceCreate;
VdpOutputSurfaceDestroy softVdpOutputSurfaceDestroy;
VdpOutputSurfaceGetParameters softVdpOutputSurfaceGetParameters;
VdpOutputSurfaceGetBitsNative softVdpOutputSurfaceGetBitsNative;
VdpOutputSurfacePutBitsNative softVdpOutputSurfacePutBitsNative;
VdpOutputSurfacePutBitsIndexed softVdpOutputSurfacePutBitsIndexed;
VdpOutputSurfacePutBitsYCbCr softVdpOutputSurfacePutBitsYCbCr;
VdpVideoMixerQueryFeatureSupport softVdpVideoMixerQueryFeatureSupport;
VdpVideoMixerQueryParameterSupport softVdpVideoMixerQueryParameterSupport;
VdpVideoMixerQueryAttributeSupport softVdpVideoMixerQueryAttributeSupport;
VdpVideoMixerQueryParameterValueRange softVdpVideoMixerQueryParameterValueRange;
VdpVideoMixerQueryAttributeValueRange softVdpVideoMixerQueryAttributeValueRange;
VdpVideoMixerCreate softVdpVideoMixerCreate;
VdpVideoMixerSetFeatureEnables softVdpVideoMixerSetFeatureEnables;
VdpVideoMixerSetAttributeValues softVdpVideoMixerSetAttributeValues;
VdpVideoMixerGetFeatureSupport softVdpVideoMixerGetFeatureSupport;
VdpVideoMixerGetFeatureEnables softVdpVideoMixerGetFeatureEnables;
VdpVideoMixerGetParameterValues softVdpVideoMixerGetParameterValues;
VdpVideoMixerGetAttributeValues softVdpVideoMixerGetAttributeValues;
VdpVideoMixerDestroy softVdpVideoMixerDestroy;
VdpVideoMixerRender softVdpVideoMixerRender;
VdpPresentationQueueTargetDestroy softVdpPresentationQueueTargetDestroy;
VdpPresentationQueueCreate softVdpPresentationQueueCreate;
VdpPresentationQueueDestroy softVdpPresentationQueueDestroy;
VdpPresentationQueueSetBackgroundColor softVdpPresentationQueueSetBackgroundColor;
VdpPresentationQueueGetBackgroundColor softVdpPresentationQueueGetBackgroundColor;
VdpPresentationQueueGetTime softVdpPresentationQueueGetTime;
VdpPresentationQueueDisplay softVdpPresentationQueueDisplay;
VdpPresentationQueueBlockUntilSurfaceIdle softVdpPresentationQueueBlockUntilSurfaceIdle;
VdpPresentationQueueQuerySurfaceStatus softVdpPresentationQueueQuerySurfaceStatus;
VdpVideoSurfaceQueryCapabilities softVdpVideoSurfaceQueryCapabilities;
VdpVideoSurfaceQueryGetPutBitsYCbCrCapabilities softVdpVideoSurfaceQueryGetPutBitsYCbCrCapabilities;
VdpVideoSurfaceCreate softVdpVideoSurfaceCreate;
VdpVideoSurfaceDestroy softVdpVideoSurfaceDestroy;
VdpVideoSurfaceGetParameters softVdpVideoSurfaceGetParameters;
VdpVideoSurfaceGetBitsYCbCr softVdpVideoSurfaceGetBitsYCbCr;
VdpVideoSurfacePutBitsYCbCr softVdpVideoSurfacePutBitsYCbCr;
VdpBitmapSurfaceQueryCapabilities softVdpBitmapSurfaceQueryCapabilities;
VdpBitmapSurfaceCreate softVdpBitmapSurfaceCreate;
VdpBitmapSurfaceDestroy softVdpBitmapSurfaceDestroy;
VdpBitmapSurfaceGetParameters softVdpBitmapSurfaceGetParameters;
VdpBitmapSurfacePutBitsNative softVdpBitmapSurfacePutBitsNative;
VdpDeviceDestroy softVdpDeviceDestroy;
VdpGetInformationString softVdpGetInformationString;
VdpGenerateCSCMatrix softVdpGenerateCSCMatrix;
VdpOutputSurfaceRenderOutputSurface softVdpOutputSurfaceRenderOutputSurface;
VdpOutputSurfaceRenderBitmapSurface softVdpOutputSurfaceRenderBitmapSurface;
VdpPreemptionCallbackRegister softVdpPreemptionCallbackRegister;
VdpPresentationQueueTargetCreateX11 softVdpPresentationQueueTargetCreateX11;
VdpGetProcAddress softVdpGetProcAddress;

#endif /* VDPAU_SOFT_H_ */
