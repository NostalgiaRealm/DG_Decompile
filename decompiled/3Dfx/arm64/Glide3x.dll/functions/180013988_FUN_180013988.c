/*
 * FUN_180013988 at 180013988
 * undefined8 __cdecl FUN_180013988(undefined8 param_1, uint param_2, undefined8 * param_3, undefined8 * param_4)
 * Address ranges: 180013988-180013ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180013988(undefined8 param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  LPVOID pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  SIZE_T SVar8;
  ulonglong uVar9;
  
  uVar9 = CONCAT44(0,param_2 + 4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar9;
  SVar8 = uVar9 << 2;
  *param_3 = 0;
  *param_4 = 0;
  if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
    SVar8 = 0xffffffffffffffff;
  }
  pvVar2 = (LPVOID)thunk_FUN_1800636c0(SVar8);
  if (pvVar2 != (LPVOID)0x0) {
    uVar4 = 2;
    if (param_2 != 0x40) {
      uVar4 = 3;
    }
    uVar5 = 3;
    if (param_2 != 0x40) {
      uVar5 = 7;
    }
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        *(float *)((longlong)pvVar2 + (ulonglong)uVar6 * 4) =
             (float)(1 << (ulonglong)((uVar6 >> (ulonglong)uVar4) + 3 & 0x1f)) /
             (float)(8 - (uVar6 & uVar5));
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
    *(undefined4 *)((longlong)pvVar2 + (ulonglong)(param_2 + 3) * 4) = 0x5bb1a2bc;
    *(undefined4 *)((longlong)pvVar2 + (ulonglong)(param_2 + 2) * 4) = 0x5bb1a2bc;
    *(undefined4 *)((longlong)pvVar2 + (ulonglong)(param_2 + 1) * 4) = 0x5bb1a2bc;
    *(undefined4 *)((longlong)pvVar2 + (ulonglong)param_2 * 4) = 0x5bb1a2bc;
    puVar3 = (undefined4 *)thunk_FUN_1800636c0(0x40004);
    if (puVar3 != (undefined4 *)0x0) {
      iVar7 = 0;
      *puVar3 = 0;
      uVar4 = 2;
      do {
        uVar5 = iVar7 + 1;
        while (*(float *)((longlong)pvVar2 + (ulonglong)uVar5 * 4) <= (float)uVar4) {
          uVar5 = iVar7 + 2;
          iVar7 = iVar7 + 1;
        }
        uVar5 = uVar4 - 1;
        uVar4 = uVar4 + 1;
        puVar3[uVar5] = iVar7;
      } while (uVar4 < 0x10002);
      *param_4 = puVar3;
      *param_3 = pvVar2;
      return 1;
    }
    thunk_FUN_180063700(pvVar2);
  }
  return 0;
}

