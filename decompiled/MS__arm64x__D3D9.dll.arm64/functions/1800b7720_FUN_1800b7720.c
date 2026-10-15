/*
 * FUN_1800b7720 at 1800b7720
 * undefined FUN_1800b7720(void)
 * Address ranges: 1800b7720-1800b7837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800b7720(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar2 == 0) {
      FUN_180003398();
    }
  }
  uVar3 = (**(code **)(*(longlong *)(&DAT_180253850)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b]
                      + 0x130))();
  switch(uVar3) {
  case 1:
  case 4:
    iVar4 = -0x7789f78c;
    break;
  case 2:
    iVar4 = -0x7789f790;
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  if (-1 < iVar4) {
    iVar4 = FUN_1800060c8(param_1 + -0x6838,param_2,0);
    if (iVar4 < 0) {
      iVar4 = -0x7789f798;
    }
  }
  return iVar4;
}

