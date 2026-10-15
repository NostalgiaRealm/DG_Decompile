/*
 * FUN_100214fc at 100214fc
 * undefined __thiscall FUN_100214fc(void * this, uint param_1, uint param_2, uint param_3)
 * Address ranges: 100214fc-10021792
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100214fc(void *this,uint param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_EDX;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 in_stack_fffffe28;
  int local_1ac;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184 [13];
  int local_150 [11];
  undefined1 local_124;
  undefined1 local_fc;
  
  FUN_1002701c((void *)((int)this + 0x3950),0,0);
  FUN_10020c17((void *)((int)this + 0x3440),'\0',2);
  bVar3 = FUN_1001615a((int)this);
  local_1ac = CONCAT31(local_1ac._1_3_,bVar3);
  if ((*(int *)((int)this + 0x2a40) == 0) || (*(int *)((int)this + 0x2a44) != 1)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  uVar9 = *(uint *)((int)this + 0x2bec);
  uVar1 = *(undefined1 *)((int)this + 0x2a9c);
  piVar8 = &DAT_100518e8;
  piVar10 = local_150;
  for (iVar6 = 0x52; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  if ((bVar11) || ((uVar9 & 0xff0000) == 0)) {
    local_fc = 0xf;
  }
  else {
    local_fc = 0;
  }
  local_124 = uVar1;
  uVar4 = FUN_100173cd((void *)(*(int *)((int)this + 0x3188) + 0x1600),local_150);
  *(undefined4 *)((int)this + 0x31d8) = uVar4;
  iVar6 = *(int *)((int)this + 0x2a40);
  piVar8 = &DAT_100518b0;
  piVar10 = local_184;
  for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  local_184[1] = *(int *)((int)this + 0x2a44);
  local_184[0] = iVar6;
  uVar4 = FUN_1001747c((void *)(*(int *)((int)this + 0x3188) + 0x15f0),local_184);
  *(undefined4 *)((int)this + 0x31e4) = uVar4;
  uVar4 = FUN_100172bb((void *)(*(int *)((int)this + 0x3188) + 0x1620),(uint *)&DAT_10051884);
  bVar11 = *(int *)((int)this + 0x2adc) != 0;
  *(undefined4 *)((int)this + 0x31e0) = uVar4;
  *(undefined1 *)((int)this + 0x3236) = 1;
  cVar2 = *(char *)((int)this + 0x3235);
  *(bool *)((int)this + 0x3235) = bVar11;
  *(byte *)((int)this + 0x3151) = *(byte *)((int)this + 0x3151) | (bool)cVar2 != bVar11;
  FUN_1001635b(this);
  iVar7 = 0;
  local_1a0 = 0;
  local_1a4 = 0;
  iVar6 = FUN_1001c41a(*(int *)((int)this + 0x2964));
  iVar5 = FUN_1001c41a(*(int *)((int)this + 0x2968));
  uVar9 = -(uint)(iVar6 != -1) & iVar6 * 0x120 + 0x3580 + (int)this;
  iVar6 = extraout_EDX;
  if (uVar9 != 0) {
    local_1a0 = *(int *)(uVar9 + 0x20);
    iVar6 = *(int *)(uVar9 + 0x28);
    iVar7 = *(int *)(uVar9 + 0x2c);
    local_1a4 = *(int *)(uVar9 + 0x24);
  }
  local_19c = 0;
  local_198 = 0;
  local_194 = (float)iVar6;
  if (iVar6 < 0) {
    local_194 = local_194 + 4.2949673e+09;
  }
  local_190 = (float)iVar7;
  if (iVar7 < 0) {
    local_190 = local_190 + 4.2949673e+09;
  }
  local_18c = 0;
  local_188 = 0x3f800000;
  FUN_1003def1(*(int *)(*(int *)((int)this + 0x3188) + 0x1304),1,(int)&local_19c);
  uVar4 = 0x1002171a;
  fVar12 = FUN_1001c638((int)this,param_1,param_2,param_3);
  FUN_100165fc(this,bVar3,'\0');
  FUN_10016b42(this,bVar3);
  *(byte *)((int)this + 0x3970) = *(byte *)((int)this + 0x3970) | 1;
  FUN_10020d93((int *)((int)this + 0x3440),in_stack_fffffe28,uVar4,(float)fVar12,local_1a0,local_1a4
               ,local_1ac);
  FUN_1001c6e7(this,uVar9,-(uint)(iVar5 != -1) & iVar5 * 0x120 + 0x3580 + (int)this,'\x0f','\x0f');
  FUN_10016d60((int)this);
  FUN_10020ee9((int *)((int)this + 0x3440));
  *(undefined4 *)((int)this + 0x2bc0) = 0x1010101;
  return;
}

