/*
 * FUN_10015f10 at 10015f10
 * undefined __thiscall FUN_10015f10(void * this, uint param_1, uint param_2, uint param_3, byte param_4)
 * Address ranges: 10015f10-100161ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015f10(void *this,uint param_1,uint param_2,uint param_3,byte param_4)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 in_stack_fffffe20;
  int local_1ac;
  int local_1a8;
  int local_1a4;
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
  
  FUN_1001c91d((void *)((int)this + 0x42e8),0,0);
  FUN_10015644((void *)((int)this + 0x3940),'\0',2);
  bVar2 = FUN_1000a535((int)this);
  local_1ac = CONCAT31(local_1ac._1_3_,bVar2);
  FUN_10011f37(this,-1);
  if ((*(int *)((int)this + 0x2c20) == 0) || (*(int *)((int)this + 0x2c24) != 1)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  uVar5 = *(uint *)((int)this + 0x2ddc);
  uVar1 = *(undefined1 *)((int)this + 0x2c7c);
  piVar9 = &DAT_10057820;
  piVar10 = local_150;
  for (iVar7 = 0x52; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  if ((bVar11) || ((uVar5 & 0xff0000) == 0)) {
    local_fc = 0xf;
  }
  else {
    local_fc = 0;
  }
  local_124 = uVar1;
  uVar4 = FUN_1000b6a9((void *)(*(int *)((int)this + 0x3688) + 0x1600),local_150);
  *(undefined4 *)((int)this + 0x36d8) = uVar4;
  iVar7 = *(int *)((int)this + 0x2c20);
  piVar9 = &DAT_100577ec;
  piVar10 = local_184;
  for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  local_184[1] = *(int *)((int)this + 0x2c24);
  local_184[3] = *(int *)((int)this + 0x2c2c);
  local_184[0] = iVar7;
  if (local_184[3] != 0) {
    FUN_10043cae(*(int *)(*(int *)((int)this + 0x3688) + 0x1304),(uint)param_4);
  }
  uVar4 = FUN_1000b758((void *)(*(int *)((int)this + 0x3688) + 0x15f0),local_184);
  *(undefined4 *)((int)this + 0x36e4) = uVar4;
  uVar4 = FUN_1000b597((void *)(*(int *)((int)this + 0x3688) + 0x1620),(uint *)&DAT_100577c0);
  bVar11 = *(int *)((int)this + 0x2cbc) != 0;
  *(undefined4 *)((int)this + 0x36e0) = uVar4;
  *(undefined1 *)((int)this + 0x3736) = 1;
  cVar3 = *(char *)((int)this + 0x3735);
  *(bool *)((int)this + 0x3735) = bVar11;
  *(byte *)((int)this + 0x3651) = *(byte *)((int)this + 0x3651) | (bool)cVar3 != bVar11;
  FUN_1000a736(this);
  piVar9 = (int *)((int)this + 0x3940);
  local_1a4 = 0;
  local_1a8 = 0;
  uVar5 = FUN_100118f8(piVar9,*(int *)((int)this + 0x2b1c));
  uVar6 = FUN_100118f8(piVar9,*(int *)((int)this + 0x2b20));
  uVar5 = -(uint)(uVar5 != 0xffffffff) & (uint)((uVar5 + 0x34) * 0x120 + (int)this);
  if (uVar5 == 0) {
    iVar7 = 0;
    iVar8 = iVar7;
  }
  else {
    local_1a4 = *(int *)(uVar5 + 0x20);
    iVar7 = *(int *)(uVar5 + 0x28);
    local_1a8 = *(int *)(uVar5 + 0x24);
    iVar8 = *(int *)(uVar5 + 0x2c);
  }
  local_19c = 0;
  local_198 = 0;
  local_194 = (float)iVar7;
  if (iVar7 < 0) {
    local_194 = local_194 + 4.2949673e+09;
  }
  local_190 = (float)iVar8;
  if (iVar8 < 0) {
    local_190 = local_190 + 4.2949673e+09;
  }
  local_18c = 0;
  local_188 = 0x3f800000;
  FUN_10043ddf(*(int *)(*(int *)((int)this + 0x3688) + 0x1304),1,(int)&local_19c);
  cVar3 = '\0';
  if (uVar5 != 0) {
    cVar3 = FUN_100165de(uVar5);
  }
  uVar4 = 0x1001617b;
  fVar12 = FUN_10011c60((int)this,param_1,param_2,param_3,cVar3);
  FUN_1000a9d3(this,bVar2,'\0');
  FUN_1000af2b(this,bVar2);
  *(byte *)((int)this + 0x44b4) = *(byte *)((int)this + 0x44b4) | 1;
  FUN_100157bc(piVar9,in_stack_fffffe20,uVar4,(float)fVar12,local_1a4,local_1a8,local_1ac);
  FUN_10011d1c(this,uVar5,-(uint)(uVar6 != 0xffffffff) & uVar6 * 0x120 + 0x3a80 + (int)this,'\x0f',
               '\x0f');
  FUN_1000b14f((int)this);
  FUN_10015912(piVar9);
  *(undefined4 *)((int)this + 0x2da8) = 0x1010101;
  return;
}

