/*
 * FUN_100148f8 at 100148f8
 * undefined __thiscall FUN_100148f8(void * this, uint param_1, uint param_2, uint param_3)
 * Address ranges: 100148f8-10014b9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100148f8(void *this,uint param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
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
  int local_1b4;
  int local_1ac;
  int local_1a8;
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
  
  FUN_1001a774((void *)((int)this + 0x3f50),0,0);
  FUN_1001402c((void *)((int)this + 0x35c0),'\0',2);
  bVar3 = FUN_10009cc4((int)this);
  local_1ac = CONCAT31(local_1ac._1_3_,bVar3);
  FUN_10010bce(this,-1);
  if ((*(int *)((int)this + 0x2ae0) == 0) || (*(int *)((int)this + 0x2ae4) != 1)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  uVar5 = *(uint *)((int)this + 0x2c8c);
  uVar1 = *(undefined1 *)((int)this + 0x2b3c);
  piVar9 = &DAT_10054630;
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
  uVar4 = FUN_1000ae48((void *)(*(int *)((int)this + 0x3308) + 0x1600),local_150);
  *(undefined4 *)((int)this + 0x3358) = uVar4;
  iVar7 = *(int *)((int)this + 0x2ae0);
  piVar9 = &DAT_100545f8;
  piVar10 = local_184;
  for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  local_184[1] = *(int *)((int)this + 0x2ae4);
  local_184[0] = iVar7;
  uVar4 = FUN_1000aef7((void *)(*(int *)((int)this + 0x3308) + 0x15f0),local_184);
  *(undefined4 *)((int)this + 0x3364) = uVar4;
  uVar4 = FUN_1000ad36((void *)(*(int *)((int)this + 0x3308) + 0x1620),(uint *)&DAT_100545cc);
  bVar11 = *(int *)((int)this + 0x2b7c) != 0;
  *(undefined4 *)((int)this + 0x3360) = uVar4;
  *(undefined1 *)((int)this + 0x33b6) = 1;
  cVar2 = *(char *)((int)this + 0x33b5);
  *(bool *)((int)this + 0x33b5) = bVar11;
  *(byte *)((int)this + 0x32d1) = *(byte *)((int)this + 0x32d1) | (bool)cVar2 != bVar11;
  FUN_10009ec5(this);
  piVar9 = (int *)((int)this + 0x35c0);
  local_1a8 = 0;
  local_1b4 = 0;
  uVar5 = FUN_1001059c(piVar9,*(int *)((int)this + 0x29e0));
  uVar6 = FUN_1001059c(piVar9,*(int *)((int)this + 0x29e4));
  uVar5 = -(uint)(uVar5 != 0xffffffff) & uVar5 * 0x120 + 0x3700 + (int)this;
  if (uVar5 == 0) {
    iVar7 = 0;
    iVar8 = iVar7;
  }
  else {
    local_1a8 = *(int *)(uVar5 + 0x20);
    iVar7 = *(int *)(uVar5 + 0x28);
    local_1b4 = *(int *)(uVar5 + 0x24);
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
  FUN_100409d6(*(int *)(*(int *)((int)this + 0x3308) + 0x1304),1,(int)&local_19c);
  uVar4 = 0x10014b2b;
  fVar12 = FUN_10010904((int)this,param_1,param_2,param_3);
  FUN_1000a166(this,bVar3,'\0');
  FUN_1000a6be(this,bVar3);
  *(byte *)((int)this + 0x411c) = *(byte *)((int)this + 0x411c) | 1;
  FUN_100141a4(piVar9,in_stack_fffffe20,uVar4,(float)fVar12,local_1a8,local_1b4,local_1ac);
  FUN_100109b3(this,uVar5,-(uint)(uVar6 != 0xffffffff) & uVar6 * 0x120 + 0x3700 + (int)this,'\x0f',
               '\x0f');
  FUN_1000a8e2((int)this);
  FUN_100142fa(piVar9);
  *(undefined4 *)((int)this + 0x2c60) = 0x1010101;
  return;
}

