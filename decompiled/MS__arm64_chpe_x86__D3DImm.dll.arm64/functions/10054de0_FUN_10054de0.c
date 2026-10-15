/*
 * FUN_10054de0 at 10054de0
 * undefined FUN_10054de0(void)
 * Address ranges: 10054de0-1005515b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10054de0(int param_1,undefined8 *param_2,uint param_3,int *param_4,uint param_5,uint *param_6)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined1 auStack_258 [4];
  undefined1 auStack_254 [4];
  undefined8 local_250;
  float local_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  undefined8 local_238;
  int local_230;
  int iStack_22c;
  int local_228;
  int iStack_224;
  int local_220;
  int iStack_21c;
  int local_218;
  int iStack_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  ulonglong local_1d0;
  longlong lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 *puStack_1a8;
  undefined8 *puStack_1a4;
  longlong lStack_1a0;
  undefined8 local_198;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_254);
  uVar4 = 0x80070057;
  if (((param_4 != (int *)0x0) && ((param_5 & 3) != 0)) && (*param_4 == 0x34)) {
    FUN_10006e50(param_1);
    FUN_100969a0(auStack_258);
    local_1e0 = param_2[4];
    uStack_1f8 = param_2[1];
    local_200 = *param_2;
    uStack_1e8 = param_2[3];
    uStack_1f0 = param_2[2];
    local_1d8 = *(undefined4 *)(param_2 + 5);
    uVar4 = FUN_10051c70(param_1,auStack_80,&local_200);
    FUN_100123f0(*(int *)(param_1 + 0x9cc) + 0x7c0,auStack_c0,uVar4);
    local_220 = *(int *)((int)param_2 + 4);
    iStack_21c = *(int *)(param_2 + 1);
    piVar1 = param_4 + 9;
    local_20c = 0x3f800000;
    local_210 = 0;
    local_218 = *(int *)((int)param_2 + 0xc);
    iStack_214 = *(int *)(param_2 + 2);
    local_238 = 0;
    local_250 = 0xfff00000000;
    local_248 = (float)*piVar1;
    fStack_244 = (float)param_4[0xb];
    local_240 = (float)param_4[10];
    fStack_23c = (float)param_4[0xc];
    uVar7 = ~(param_5 >> 1) & 1;
    uStack_1c0 = 0;
    local_1d0 = (ulonglong)(uint)param_4[1];
    lStack_1c8 = (ulonglong)(uint)param_4[2] << 0x20;
    lStack_1a0 = (ulonglong)(uint)param_4[3] << 0x20;
    uVar6 = param_4[4];
    if (uVar7 == 0) {
      local_198 = (ulonglong)uVar6 << 0x20;
    }
    else {
      local_198 = CONCAT44(uVar6,param_4[5]);
    }
    _puStack_1a8 = CONCAT44(&local_250,auStack_c0);
    uStack_1b8 = 0x100000200000000;
    local_1b0._0_3_ = CONCAT21(0x101,(char)uVar7);
    local_1b0 = CONCAT53((int5)(CONCAT44(&local_220,~(param_5 >> 1)) >> 0x18),(undefined3)local_1b0)
                & 0xffffffff00ffffff;
    FUN_1000f710(param_1,&local_1d0,0,param_3);
    *param_6 = 0;
    if (uVar7 != 0) {
      uVar7 = ((uint)local_250 | local_250._4_4_ << 0xc) & 0xfff000;
      param_4[7] = uVar7;
      param_4[8] = (uint)local_250 & 0xfff;
      *param_6 = uVar7;
    }
    if ((DAT_100acbfc & 1) == 0) {
      DAT_100acbfc = DAT_100acbfc | 1;
      DAT_100acbb0 = 0xc0000000c0000000;
      DAT_100acbb8 = 0x4000000040000000;
    }
    fVar8 = (float)DAT_100acbb0;
    uVar2 = (ulonglong)DAT_100acbb0 >> 0x20;
    *(ulonglong *)(param_4 + 0xb) =
         CONCAT44((int)(fStack_23c + (float)((ulonglong)DAT_100acbb8 >> 0x20)),
                  (int)(fStack_244 + (float)DAT_100acbb8));
    *(ulonglong *)piVar1 = CONCAT44((int)(local_240 + (float)uVar2),(int)(local_248 + fVar8));
    local_230 = *(int *)((int)param_2 + 4);
    iStack_22c = *(int *)(param_2 + 1);
    local_228 = *(int *)((int)param_2 + 0xc) + local_230;
    iStack_224 = iStack_22c + *(int *)(param_2 + 2);
    (*(code *)PTR_FUN_100a1088)(piVar1,piVar1,&local_230);
    uVar6 = param_4[1];
    uVar7 = 0;
    uVar5 = param_4[3];
    if (param_3 != 0) {
      do {
        uVar7 = uVar7 + 1;
        *(undefined4 *)(uVar5 + 0x10) = *(undefined4 *)(uVar6 + 0x10);
        *(undefined4 *)(uVar5 + 0x14) = *(undefined4 *)(uVar6 + 0x14);
        *(undefined4 *)(uVar5 + 0x18) = *(undefined4 *)(uVar6 + 0x18);
        *(undefined4 *)(uVar5 + 0x1c) = *(undefined4 *)(uVar6 + 0x1c);
        uVar6 = param_4[2] + uVar6;
        uVar5 = uVar5 + param_4[4];
      } while (uVar7 < param_3);
    }
    uVar4 = 0;
    FUN_10096a50(auStack_258);
  }
  FUN_10096790(auStack_254);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar4;
}

