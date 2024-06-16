#include <intrin.h>
#include "IDirect3D.h"
#include "debug.h"

#pragma intrinsic(_ReturnAddress)

HRESULT __stdcall IDirect3D2__QueryInterface(IDirect3D2Impl* This, REFIID riid, void** obj)
{
    TRACE("NOT_IMPLEMENTED -> %s(This=%p, riid=%08X, obj=%p) [%p]\n", __FUNCTION__, This, (unsigned int)riid, obj);
    HRESULT ret = E_FAIL;
    TRACE("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

ULONG __stdcall IDirect3D2__AddRef(IDirect3D2Impl* This)
{
    TRACE("-> %s(This=%p) [%p]\n", __FUNCTION__, This);
    ULONG ret = ++This->ref;
    TRACE("<- %s(This ref=%u)\n", __FUNCTION__, ret);
    return ret;
}

ULONG __stdcall IDirect3D2__Release(IDirect3D2Impl* This)
{
    TRACE("-> %s(This=%p) [%p]\n", __FUNCTION__, This);

    ULONG ret = --This->ref;

    if (This->ref == 0)
    {
        TRACE("     Released (%p)\n", This);

        HeapFree(GetProcessHeap(), 0, This);
    }

    TRACE("<- %s(This ref=%u)\n", __FUNCTION__, ret);
    return ret;
}

HRESULT __stdcall IDirect3D2__EnumDevices(IDirect3D2Impl* This, int a, int b)
{
    TRACE("NOT_IMPLEMENTED -> %s(This=%p) [%p]\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    TRACE("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D2__CreateLight(IDirect3D2Impl* This, int a, int b)
{
    TRACE("NOT_IMPLEMENTED -> %s(This=%p) [%p]\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    TRACE("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D2__CreateMaterial(IDirect3D2Impl* This, int a, int b)
{
    TRACE("NOT_IMPLEMENTED -> %s(This=%p) [%p]\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    TRACE("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D2__CreateViewport(IDirect3D2Impl* This, int a, int b)
{
    TRACE("NOT_IMPLEMENTED -> %s(This=%p) [%p]\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    TRACE("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D2__FindDevice(IDirect3D2Impl* This, int a, int b)
{
    TRACE("NOT_IMPLEMENTED -> %s(This=%p) [%p]\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    TRACE("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D2__CreateDevice(IDirect3D2Impl* This, int a, int b, int c)
{
    TRACE("NOT_IMPLEMENTED -> %s(This=%p) [%p]\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    TRACE("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

struct IDirect3D2ImplVtbl g_d3d2_vtbl =
{
    /* IUnknown */
    IDirect3D2__QueryInterface,
    IDirect3D2__AddRef,
    IDirect3D2__Release,
    /* IDirect3D2Impl */
    IDirect3D2__EnumDevices,
    IDirect3D2__CreateLight,
    IDirect3D2__CreateMaterial,
    IDirect3D2__CreateViewport,
    IDirect3D2__FindDevice,
    IDirect3D2__CreateDevice,
};
