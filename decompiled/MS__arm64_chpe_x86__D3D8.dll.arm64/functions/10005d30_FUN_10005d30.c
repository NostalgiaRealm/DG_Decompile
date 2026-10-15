/*
 * FUN_10005d30 at 10005d30
 * undefined FUN_10005d30(void)
 * Address ranges: 10005d30-10005ea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10005d30(int param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  ulonglong extraout_x13;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  
  uVar10 = 0x8876086c;
  if (param_5 != (undefined8 *)0x0) {
    param_5[1] = 0;
    *param_5 = 0;
    if (param_2 < *(uint *)(param_1 + 0x4c)) {
      local_58 = 0;
      local_50 = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x48) + param_2 * 4);
      if ((*(uint *)(DAT_1013ceec + 0x947) >> 2 & 1) != 0) {
        local_60[0] = 0x20;
        FUN_100063d8(&local_58,local_60);
      }
      if ((*(uint *)(DAT_1013ceec + 0x947) >> 1 & 1) != 0) {
        local_60[0] = 0x10;
        FUN_100063d8(&local_58,local_60);
      }
      cVar7 = FUN_100306a0();
      puVar1 = &DAT_101389cc;
      if (cVar7 == '\0') {
        puVar1 = &DAT_101389c0;
      }
      piVar4 = (int *)(puVar1 + iVar2 * 0x45);
      uVar3 = piVar4[1];
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(0xf004,0x10005e0c);
        (*(code *)uVar6)();
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = param_3 / uVar3;
      }
      iVar2 = param_3 - uVar5 * uVar3;
      uVar9 = local_58 & 0xffffffff;
      if (uVar5 < local_58._4_4_) {
        uVar10 = 0;
        *(undefined4 *)param_5 = *(undefined4 *)(*piVar4 + iVar2 * 0x18);
        *(undefined4 *)((int)param_5 + 4) = *(undefined4 *)(*piVar4 + iVar2 * 0x18 + 4);
        *(undefined4 *)(param_5 + 1) = *(undefined4 *)(*piVar4 + iVar2 * 0x18 + 0x10);
        uVar8 = FUN_100029f0(param_1,*(undefined1 *)(uVar5 + (int)local_58));
        *(undefined4 *)((int)param_5 + 0xc) = uVar8;
        uVar9 = extraout_x13;
      }
      FUN_100fed00(uVar9 & 0xffffffff);
    }
  }
  return uVar10;
}

