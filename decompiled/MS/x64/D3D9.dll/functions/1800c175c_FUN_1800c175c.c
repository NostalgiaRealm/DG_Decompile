/*
 * FUN_1800c175c at 1800c175c
 * undefined8 * __fastcall FUN_1800c175c(undefined8 * param_1, longlong param_2, longlong * param_3, undefined8 * param_4, undefined4 param_5, char param_6, undefined1 param_7)
 * Address ranges: 1800c175c-1800c1981
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800c175c(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
             undefined4 param_5,char param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  param_1[0x28] = param_1;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  lVar1 = *(longlong *)(param_2 + 0xe28);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  param_1[8] = 0;
  param_1[6] = 0xffffffffffffffff;
  param_1[0xb] = param_2;
  param_1[2] = -(ulonglong)(lVar1 != 0) & lVar1 + 8U;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[1] = &PTR_FUN_180101020;
  param_1[10] = &PTR_LAB_180100fd8;
  *(undefined4 *)((longlong)param_1 + 0x11c) = param_5;
  param_1[0x10] = 0;
  param_1[0x11] = param_3;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  uVar2 = param_4[1];
  param_1[0x12] = *param_4;
  param_1[0x13] = uVar2;
  uVar2 = param_4[3];
  param_1[0x14] = param_4[2];
  param_1[0x15] = uVar2;
  uVar2 = param_4[5];
  param_1[0x16] = param_4[4];
  param_1[0x17] = uVar2;
  uVar2 = param_4[7];
  param_1[0x18] = param_4[6];
  param_1[0x19] = uVar2;
  uVar2 = param_4[9];
  param_1[0x1a] = param_4[8];
  param_1[0x1b] = uVar2;
  uVar2 = param_4[0xb];
  param_1[0x1c] = param_4[10];
  param_1[0x1d] = uVar2;
  uVar2 = param_4[0xd];
  param_1[0x1e] = param_4[0xc];
  param_1[0x1f] = uVar2;
  param_1[0x20] = param_4[0xe];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  iVar3 = (**(code **)(*param_3 + 0x38))(param_3);
  *(bool *)((longlong)param_1 + 0x49) = iVar3 == 1;
  *param_1 = &PTR_FUN_180104ae0;
  param_1[1] = &PTR_FUN_180104a28;
  param_1[10] = &PTR_LAB_180100fd8;
  *(undefined1 *)((longlong)param_1 + 0x181) = param_7;
  param_1[0x2f] = param_2;
  *(char *)(param_1 + 0x30) = param_6;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x26);
  if (*(uint *)(param_1 + 0x26) < 3) {
    param_1[uVar4 * 2 + 0x29] = 0;
    (param_1 + uVar4 * 2 + 0x29)[1] = 0x46000000000000c0;
    *(int *)(param_1 + 0x26) = *(int *)(param_1 + 0x26) + 1;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x26);
    if (*(uint *)(param_1 + 0x26) < 3) {
      param_1[uVar4 * 2 + 0x29] = 0x458aadfc794950f2;
      (param_1 + uVar4 * 2 + 0x29)[1] = 0x3b500b0ba1105e90;
      *(int *)(param_1 + 0x26) = *(int *)(param_1 + 0x26) + 1;
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x26);
    }
  }
  if ((param_6 != '\0') && ((uint)uVar4 < 3)) {
    param_1[uVar4 * 2 + 0x29] = 0x4d2e1c3d91886caf;
    (param_1 + uVar4 * 2 + 0x29)[1] = 0x3338d7d4c3eaba0;
    *(int *)(param_1 + 0x26) = *(int *)(param_1 + 0x26) + 1;
  }
  return param_1;
}

