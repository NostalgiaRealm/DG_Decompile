/*
 * FUN_1800ad58c at 1800ad58c
 * undefined8 * __fastcall FUN_1800ad58c(undefined8 * param_1, undefined4 param_2, char param_3)
 * Address ranges: 1800ad58c-1800ad7b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800ad58c(undefined8 *param_1,undefined4 param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = param_2;
  puVar3 = DAT_180111f10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_180100ee8;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined2 *)((longlong)param_1 + 0x66) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
    DAT_180111f08 = 0x40;
    DAT_180111f10 = puVar3;
    if (puVar3 != (undefined8 *)0x0) goto LAB_1800ad621;
LAB_1800ad613:
    uVar2 = 0;
  }
  else {
LAB_1800ad621:
    if (DAT_180111f08 == DAT_180111f0c) {
      auVar1 = ZEXT816(8) * ZEXT416(DAT_180111f08 * 2);
      uVar4 = auVar1._0_8_;
      if (auVar1._8_8_ != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      puVar3 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
      if (puVar3 == (undefined8 *)0x0) goto LAB_1800ad613;
      FUN_1800fbec0(puVar3,DAT_180111f10,(ulonglong)DAT_180111f08 << 3);
      FUN_1800fbcf0(DAT_180111f10);
      DAT_180111f08 = DAT_180111f08 * 2;
      DAT_180111f10 = puVar3;
      puVar3[DAT_180111f0c] = param_1;
    }
    else {
      puVar3[DAT_180111f0c] = param_1;
    }
    DAT_180111f0c = DAT_180111f0c + 1;
    uVar2 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x45) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x46) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = -(ulonglong)(param_1 != (undefined8 *)0x0) & (ulonglong)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_180103fd8;
  param_1[0x11] = &PTR_LAB_1800fd890;
  param_1[0x14] = &PTR_LAB_180103f28;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(char *)((longlong)param_1 + 0x45) != '\0') {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x15);
    if (*(uint *)(param_1 + 0x15) < 3) {
      param_1[uVar5 * 2 + 0x18] = 0;
      (param_1 + uVar5 * 2 + 0x18)[1] = 0x46000000000000c0;
      *(int *)(param_1 + 0x15) = *(int *)(param_1 + 0x15) + 1;
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x15);
      if (*(uint *)(param_1 + 0x15) < 3) {
        param_1[uVar5 * 2 + 0x18] = 0x426d64d481bdcbca;
        (param_1 + uVar5 * 2 + 0x18)[1] = 0x5c27f44701ad8dae;
        *(int *)(param_1 + 0x15) = *(int *)(param_1 + 0x15) + 1;
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x15);
      }
    }
    if ((param_3 != '\0') && ((uint)uVar5 < 3)) {
      param_1[uVar5 * 2 + 0x18] = 0x400c69fc02177241;
      (param_1 + uVar5 * 2 + 0x18)[1] = 0x1d86f64da493f18f;
      *(int *)(param_1 + 0x15) = *(int *)(param_1 + 0x15) + 1;
    }
    *(char *)((longlong)param_1 + 0x67) = param_3;
  }
  return param_1;
}

