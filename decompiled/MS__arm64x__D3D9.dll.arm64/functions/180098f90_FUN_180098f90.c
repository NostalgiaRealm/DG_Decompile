/*
 * FUN_180098f90 at 180098f90
 * undefined FUN_180098f90(void)
 * Address ranges: 180098f90-180099097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180098f90(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + -0xf0) == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + -0xa8);
  FUN_180101630(lVar3 + 0x12c0);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar3 + 0x12c0,0x410);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar3 + 0x14c0);
      puVar2[1] = 0x410;
      uVar4 = (longlong)puVar2 + 0x27U & 0xfffffffffffffff8;
      puVar2[2] = uVar4;
      puVar2[3] = param_1 + -0x100;
      thunk_FUN_180001218(uVar4,param_2,0x400);
      *(undefined8 *)(uVar4 + 0x400) = 0;
      *puVar2 = FUN_180099098;
      *(undefined8 **)(lVar3 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28 + 0x1350) =
           (undefined8 *)(uVar4 + 0x400);
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar3 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_180099080;
    }
    *(undefined4 *)(lVar3 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar3 + 0x12c0);
  }
  puVar2 = *(undefined8 **)(lVar3 + 0x14a0);
  *puVar2 = param_2;
  puVar2[1] = param_1 + -0x100;
  FUN_180099098();
LAB_180099080:
  *(undefined4 *)(lVar3 + 0x12c0) = 0;
  return;
}

