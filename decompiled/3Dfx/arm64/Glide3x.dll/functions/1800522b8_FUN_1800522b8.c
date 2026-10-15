/*
 * FUN_1800522b8 at 1800522b8
 * WNDPROC __cdecl FUN_1800522b8(undefined8 param_1)
 * Address ranges: 1800522b8-180052413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC FUN_1800522b8(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  WNDPROC pWVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar1 = FUN_1800636c0(0x192f8);
  lVar5 = 0x10;
  pWVar4 = (WNDPROC)(lVar1 + 0x47U & 0xffffffffffffffc0);
  *(longlong *)(pWVar4 + -8) = lVar1;
  *(undefined4 *)(pWVar4 + 8) = 0;
  puVar6 = (undefined8 *)((ulonglong)pWVar4 | 0x18);
  *(undefined2 *)(pWVar4 + 0xc) = 0;
  *(undefined8 *)(pWVar4 + 0x10) = 0;
  *(undefined ***)pWVar4 = &PTR_LAB_180069d08;
  do {
    lVar5 = lVar5 + -1;
    FUN_180054660(puVar6);
    puVar6 = puVar6 + 5;
  } while (lVar5 != 0);
  *(undefined8 *)(pWVar4 + 0x308) = 0;
  *(undefined8 *)(pWVar4 + 0x298) = param_1;
  *(undefined8 *)(pWVar4 + 0x2a0) = 0;
  pcVar3 = pWVar4 + 0x318;
  *(undefined8 *)(pWVar4 + 0x2a8) = 0;
  *(undefined8 *)(pWVar4 + 0x2b0) = 0;
  *(undefined8 *)(pWVar4 + 0x2b8) = 0;
  *(undefined8 *)(pWVar4 + 0x2c0) = 0;
  *(undefined8 *)(pWVar4 + 0x2c8) = 0;
  *(undefined8 *)(pWVar4 + 0x2d0) = 0;
  *(undefined8 *)(pWVar4 + 0x2d8) = 0;
  *(undefined8 *)(pWVar4 + 0x2e0) = 0;
  *(undefined8 *)(pWVar4 + 0x2e8) = 0;
  *(undefined8 *)(pWVar4 + 0x2f0) = 0;
  *(undefined8 *)(pWVar4 + 0x2f8) = 0;
  *(undefined8 *)(pWVar4 + 0x300) = 0;
  *(undefined4 *)(pWVar4 + 0x310) = 0x10000;
  lVar1 = 8;
  pWVar4[0x314] = (code)0x0;
  do {
    *(undefined8 *)(pcVar3 + 8) = 0;
    *(undefined8 *)(pcVar3 + 0x10) = 0;
    lVar1 = lVar1 + -1;
    pcVar3 = pcVar3 + 0x60;
  } while (lVar1 != 0);
  *(undefined8 *)(pWVar4 + 0x618) = 0;
  *(undefined4 *)(pWVar4 + 0x678) = 0;
  pcVar3 = pWVar4 + 0x6b0;
  *(undefined ***)(pWVar4 + 0x680) = &PTR_s_DGD3D11ROOT_18006f580;
  *(undefined8 *)(pWVar4 + 0x688) = 0;
  *(undefined8 *)(pWVar4 + 0x648) = 0;
  *(undefined8 *)(pWVar4 + 0x650) = 0;
  lVar1 = 0x10;
  *(undefined8 *)(pWVar4 + 0x658) = 0;
  *(undefined8 *)(pWVar4 + 0x660) = 0;
  *(undefined8 *)(pWVar4 + 0x690) = 0;
  *(undefined8 *)(pWVar4 + 0x698) = 0;
  pWVar4[0x67c] = (code)0x0;
  *(undefined8 *)(pWVar4 + 0x6a0) = 0;
  *(undefined8 *)(pWVar4 + 0x628) = 0;
  *(undefined8 *)(pWVar4 + 0x620) = 0;
  *(undefined8 *)(pWVar4 + 0x638) = 0;
  *(undefined8 *)(pWVar4 + 0x630) = 0;
  *(undefined8 *)(pWVar4 + 0x640) = 0;
  *(undefined8 *)(pWVar4 + 0x670) = 0;
  *(undefined8 *)(pWVar4 + 0x668) = 0;
  *(undefined ***)pWVar4 = &PTR_FUN_180069be8;
  do {
    lVar1 = lVar1 + -1;
    FUN_180052048((undefined8 *)pcVar3);
    pcVar3 = pcVar3 + 0x18c0;
  } while (lVar1 != 0);
  uVar2 = FUN_1800548a0(pWVar4);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(longlong *)pWVar4 + 0x80))(pWVar4,0);
    FUN_180063d00(*(LPVOID *)(pWVar4 + -8));
    pWVar4 = (WNDPROC)0x0;
  }
  return pWVar4;
}

