/*
 * FUN_1003f5a8 at 1003f5a8
 * undefined FUN_1003f5a8(void)
 * Address ranges: 1003f5a8-1003f7d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003f5a8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *extraout_w11;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_d0 [4];
  ulonglong local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar3 = 0x80070057;
  if (((param_3 != 0) && (param_4 != 0)) &&
     (uVar3 = 0x88760082, *(int *)(param_3 + 0xfc) == param_1)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    puVar2 = (undefined8 *)(*extraout_w11)(param_3);
    uVar3 = 0x88760247;
    if ((((*(uint *)(puVar2 + 0xd) >> 3 & 1) == 0) || (*(int *)(param_3 + 0x10c) == 0)) &&
       (((*(uint *)(puVar2 + 0xd) & 0x2201) == 0 &&
        (uVar3 = 0x887601c2, *(char *)(param_3 + 8) == '\0')))) {
      local_d0[0] = 0;
      uStack_a8 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      local_60 = 0;
      local_c0 = CONCAT44(*(undefined4 *)((int)puVar2 + 4),0x7c) & 0x8080fffffffff;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_b8 = puVar2[1];
      local_50 = 0;
      local_48 = 0;
      uVar3 = 0x80004005;
      local_b0 = (ulonglong)*(uint *)(puVar2 + 2);
      local_a0 = (ulonglong)*(uint *)((int)puVar2 + 0x24) << 0x20;
      uStack_58 = 0x40;
      iVar1 = FUN_1003d940(param_1,*(undefined4 *)(param_3 + 0x100),*(undefined4 *)(param_3 + 0xf8),
                           param_2,&local_c0,*(undefined4 *)(param_3 + 4),param_4,local_d0);
      if (-1 < iVar1) {
        uVar6 = *puVar2;
        uVar5 = puVar2[3];
        uVar4 = puVar2[2];
        uVar3 = 0;
        *(undefined8 *)(local_d0[0] + 0x158) = puVar2[1];
        *(undefined8 *)(local_d0[0] + 0x150) = uVar6;
        *(undefined8 *)(local_d0[0] + 0x168) = uVar5;
        *(undefined8 *)(local_d0[0] + 0x160) = uVar4;
        uVar6 = puVar2[4];
        uVar5 = puVar2[7];
        uVar4 = puVar2[6];
        *(undefined8 *)(local_d0[0] + 0x178) = puVar2[5];
        *(undefined8 *)(local_d0[0] + 0x170) = uVar6;
        *(undefined8 *)(local_d0[0] + 0x188) = uVar5;
        *(undefined8 *)(local_d0[0] + 0x180) = uVar4;
        uVar6 = puVar2[8];
        uVar5 = puVar2[0xb];
        uVar4 = puVar2[10];
        *(undefined8 *)(local_d0[0] + 0x198) = puVar2[9];
        *(undefined8 *)(local_d0[0] + 400) = uVar6;
        *(undefined8 *)(local_d0[0] + 0x1a8) = uVar5;
        *(undefined8 *)(local_d0[0] + 0x1a0) = uVar4;
        uVar4 = puVar2[0xc];
        *(undefined8 *)(local_d0[0] + 0x1b8) = puVar2[0xd];
        *(undefined8 *)(local_d0[0] + 0x1b0) = uVar4;
        *(undefined8 *)(local_d0[0] + 0x1c0) = puVar2[0xe];
        *(undefined4 *)(local_d0[0] + 0x1c8) = *(undefined4 *)(puVar2 + 0xf);
        *(uint *)(local_d0[0] + 0x154) = *(uint *)(local_d0[0] + 0x154) & 0xfffe1fff;
        *(undefined8 *)(local_d0[0] + 0x164) = 0;
        *(undefined8 *)(local_d0[0] + 400) = 0;
        *(undefined4 *)(local_d0[0] + 0x1cc) = *(undefined4 *)(param_3 + 0x1cc);
        *(undefined4 *)(local_d0[0] + 0x1d0) = *(undefined4 *)(param_3 + 0x1d0);
      }
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar3;
}

