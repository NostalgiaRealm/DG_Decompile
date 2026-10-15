/*
 * FUN_100506b0 at 100506b0
 * undefined FUN_100506b0(void)
 * Address ranges: 100506b0-100507bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100506b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint *param_5,uint *param_6,int param_7)

{
  uint uVar1;
  uint3 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  local_30 = 0;
  uStack_18 = 0;
  local_20 = 0;
  FUN_10050418(param_1,param_2,param_3,param_4,&local_30,&local_20);
  iVar8 = (int)(float)((ulonglong)local_30 >> 0x20);
  uVar12 = (undefined1)((uint)iVar8 >> 8);
  uVar13 = (undefined1)((uint)iVar8 >> 0x10);
  uVar14 = (undefined1)((uint)iVar8 >> 0x18);
  iVar9 = (int)(float)uStack_28;
  iVar10 = (int)(float)((ulonglong)uStack_28 >> 0x20);
  auVar3[4] = (char)iVar8;
  auVar3._0_4_ = (int)(float)local_30;
  auVar3[5] = uVar12;
  auVar3[6] = uVar13;
  auVar3[7] = uVar14;
  auVar3[8] = (char)iVar9;
  auVar3[9] = (char)((uint)iVar9 >> 8);
  auVar3[10] = (char)((uint)iVar9 >> 0x10);
  auVar3[0xb] = (char)((uint)iVar9 >> 0x18);
  auVar3[0xc] = (char)iVar10;
  auVar3[0xd] = (char)((uint)iVar10 >> 8);
  auVar3[0xe] = (char)((uint)iVar10 >> 0x10);
  auVar3[0xf] = (char)((uint)iVar10 >> 0x18);
  uVar7 = NEON_uqxtn(CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14((char)iVar8,
                                                                              (int)(float)local_30))
                                             )),auVar3,4);
  auVar4[8] = (char)uVar7;
  auVar4._0_8_ = uVar7;
  auVar4[9] = (char)((ulonglong)uVar7 >> 8);
  auVar4[10] = (char)((ulonglong)uVar7 >> 0x10);
  auVar4[0xb] = (char)((ulonglong)uVar7 >> 0x18);
  auVar4[0xc] = (char)((ulonglong)uVar7 >> 0x20);
  auVar4[0xd] = (char)((ulonglong)uVar7 >> 0x28);
  auVar4[0xe] = (char)((ulonglong)uVar7 >> 0x30);
  auVar4[0xf] = (char)((ulonglong)uVar7 >> 0x38);
  uVar7 = NEON_uqxtn(uVar7,auVar4,2);
  uVar2 = (uint3)uVar7;
  iVar8 = (int)(float)((ulonglong)local_20 >> 0x20);
  uVar12 = (undefined1)((uint)iVar8 >> 8);
  uVar13 = (undefined1)((uint)iVar8 >> 0x10);
  uVar14 = (undefined1)((uint)iVar8 >> 0x18);
  iVar9 = (int)(float)uStack_18;
  iVar10 = (int)(float)((ulonglong)uStack_18 >> 0x20);
  auVar5[4] = (char)iVar8;
  auVar5._0_4_ = (int)(float)local_20;
  auVar5[5] = uVar12;
  auVar5[6] = uVar13;
  auVar5[7] = uVar14;
  auVar5[8] = (char)iVar9;
  auVar5[9] = (char)((uint)iVar9 >> 8);
  auVar5[10] = (char)((uint)iVar9 >> 0x10);
  auVar5[0xb] = (char)((uint)iVar9 >> 0x18);
  auVar5[0xc] = (char)iVar10;
  auVar5[0xd] = (char)((uint)iVar10 >> 8);
  auVar5[0xe] = (char)((uint)iVar10 >> 0x10);
  auVar5[0xf] = (char)((uint)iVar10 >> 0x18);
  uVar7 = NEON_uqxtn(CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14((char)iVar8,
                                                                              (int)(float)local_20))
                                             )),auVar5,4);
  uVar1 = (uVar2 & 0xf8 | (uVar2 >> 3 & 0x1f0000 | uVar2 & 0xfc00) >> 2) >> 3;
  *param_5 = uVar1;
  auVar6[8] = (char)uVar7;
  auVar6._0_8_ = uVar7;
  auVar6[9] = (char)((ulonglong)uVar7 >> 8);
  auVar6[10] = (char)((ulonglong)uVar7 >> 0x10);
  auVar6[0xb] = (char)((ulonglong)uVar7 >> 0x18);
  auVar6[0xc] = (char)((ulonglong)uVar7 >> 0x20);
  auVar6[0xd] = (char)((ulonglong)uVar7 >> 0x28);
  auVar6[0xe] = (char)((ulonglong)uVar7 >> 0x30);
  auVar6[0xf] = (char)((ulonglong)uVar7 >> 0x38);
  uVar7 = NEON_uqxtn(uVar7,auVar6,2);
  uVar2 = (uint3)uVar7;
  uVar11 = (uVar2 & 0xf8 | (uVar2 >> 3 & 0x1f0000 | uVar2 & 0xfc00) >> 2) >> 3;
  *param_6 = uVar11;
  if (uVar1 == uVar11) {
    uVar11 = ~uVar1 & 0xffff;
    *param_6 = uVar11;
  }
  if (uVar11 < uVar1) {
    if (param_7 == 0) {
      return;
    }
  }
  else if (param_7 != 0) {
    return;
  }
  *param_5 = uVar11;
  *param_6 = uVar1;
  return;
}

