/*
 * FUN_1003d472 at 1003d472
 * undefined4 * __thiscall FUN_1003d472(void * this, undefined4 * param_1, int * param_2, int * param_3, int * param_4, int param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 1003d472-1003d890
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1003d472(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_c0 [44];
  undefined4 *local_10;
  undefined4 local_c;
  
  *(undefined4 *)((int)this + 0x9dc) = 0;
  *(undefined4 *)((int)this + 0x9e0) = 0;
  local_10 = this;
  FUN_1005c9cc((int *)((int)this + 0x9e4),0,0x70);
  if (param_3 == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_c = (**(code **)(*param_3 + 0x48))();
  }
  iVar4 = param_2[3];
  cVar1 = (**(code **)(*param_2 + 0x30))();
  uVar9 = cVar1 == '\0';
  puVar7 = (undefined4 *)(-(uint)(iVar4 != 0) & iVar4 + 0x7cU);
  piVar10 = param_3;
  uVar11 = local_c;
  uVar12 = param_6;
  uVar13 = param_7;
  uVar2 = (**(code **)(*param_2 + 0x44))();
  FUN_10005b25(this,uVar2,puVar7,piVar10,uVar11,uVar12,uVar13,uVar9);
  puVar7 = local_10;
  *(int *)((int)this + 0xa58) = param_5;
  *(undefined ***)this = &PTR_FUN_1005f480;
  *(undefined4 *)((int)this + 0xa54) = 0;
  *(undefined4 *)((int)this + 0xa5c) = 0;
  *(undefined4 *)((int)this + 0xa60) = *param_1;
  *(undefined4 *)((int)this + 0xa64) = param_1[1];
  *(undefined4 *)((int)this + 0xa68) = param_1[2];
  *(undefined4 *)((int)this + 0xa6c) = param_1[3];
  local_10[0x29c] = param_2;
  iVar5 = 8;
  local_10[0x29d] = param_3;
  local_10[0x2a0] = param_4;
  *(undefined1 *)(local_10 + 0x2a1) = 0;
  *(undefined1 *)((int)local_10 + 0xa86) = 1;
  *(undefined1 *)((int)local_10 + 0xa87) = 1;
  *(undefined1 *)(local_10 + 0x2a2) = 1;
  *(undefined1 *)((int)local_10 + 0xa89) = 1;
  local_10[0x29e] = 0;
  local_10[0x29f] = 0;
  local_10[0x545] = 0;
  local_10[0x546] = 0;
  local_10[0x547] = 0;
  local_10[0x548] = 0;
  local_10[0x549] = 0;
  local_10[0x54a] = 0;
  local_10[0x54b] = 0;
  local_10[0x54c] = 0;
  local_10[0x54e] = 0;
  local_10[0x54f] = 0;
  puVar8 = local_10 + 0x550;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_10[0x55a] = 8;
  local_10[0x55b] = 0;
  local_10[0x55c] = 0;
  local_10[0x55d] = 0;
  local_10[0x55e] = 8;
  local_10[0x55f] = 0;
  local_10[0x560] = 0;
  local_10[0x561] = 0;
  local_10[0x562] = 0;
  local_10[0x598] = 0;
  local_10[0x599] = 0;
  local_10[0x59a] = 0;
  local_10[0x59b] = 0;
  *(undefined2 *)(local_10 + 0x59c) = 0;
  FUN_1003c306(local_10 + 0x564);
  puVar8 = puVar7 + 0x277;
  puVar3 = puVar7 + 0x590;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(puVar7 + 0x5d5) = 1;
  *(undefined1 *)((int)puVar7 + 0x1755) = 1;
  puVar7[0x5ee] = 0;
  puVar7[0x5ef] = 0;
  puVar7[0x5f0] = 0;
  puVar7[0x5f1] = 0;
  puVar7[0x5f2] = 0;
  puVar7[0x5f3] = 0;
  puVar7[0x5f4] = 0;
  puVar7[0x5f5] = 0;
  FUN_10042807(puVar8,&DAT_1005d2a0,0);
  cVar1 = (**(code **)(*(int *)puVar7[0x29c] + 0x30))();
  piVar10 = param_3;
  if (cVar1 == '\0') {
    puVar6 = &DAT_1005d1b0;
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (param_3 == (int *)0x0) {
      puVar3 = puVar7 + 0x295;
    }
    else {
      puVar3 = (undefined4 *)(puVar7[0x29d] + 0xc);
    }
    FUN_10042807(puVar8,&DAT_1005d180,(int)puVar3);
    if (piVar10 == (int *)0x0) {
      puVar3 = puVar7 + 0x295;
    }
    else {
      puVar3 = (undefined4 *)(puVar7[0x29d] + 0xc);
    }
    FUN_10042807(puVar8,&DAT_1005d190,(int)puVar3);
    if (piVar10 == (int *)0x0) {
      puVar3 = puVar7 + 0x295;
    }
    else {
      puVar3 = (undefined4 *)(puVar7[0x29d] + 0xc);
    }
    puVar6 = &DAT_1005d1a0;
  }
  FUN_10042807(puVar8,puVar6,(int)puVar3);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_4);
  }
  iVar4 = 0;
  do {
    if (param_1[iVar4] != (&DAT_1005d180)[iVar4]) {
      iVar4 = 0;
      goto LAB_1003d738;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  puVar7[1] = &DAT_10069e00;
  puVar7[2] = &DAT_1006a2c8;
  puVar7[0x297] = &DAT_1006a3f8;
  goto LAB_1003d78b;
  while (iVar4 = iVar4 + 1, iVar4 != 4) {
LAB_1003d738:
    if (param_1[iVar4] != (&DAT_1005d190)[iVar4]) {
      iVar4 = 0;
      goto LAB_1003d766;
    }
  }
  puVar7[1] = &DAT_1006a440;
  puVar7[2] = &DAT_1006a908;
  puVar7[0x297] = &DAT_1006aa38;
  goto LAB_1003d78b;
  while (iVar4 = iVar4 + 1, iVar4 != 4) {
LAB_1003d7ed:
    if (param_1[iVar4] != (&DAT_1005d1b0)[iVar4]) goto LAB_1003d817;
  }
  puVar7[1] = &DAT_1006b0c0;
  puVar7[2] = &DAT_1006b588;
  *(undefined2 *)((int)puVar7 + 0xa86) = 0;
  *(undefined1 *)(puVar7 + 0x2a2) = 0;
  goto LAB_1003d817;
  while (iVar4 = iVar4 + 1, iVar4 != 4) {
LAB_1003d766:
    if (param_1[iVar4] != (&DAT_1005d1a0)[iVar4]) {
      iVar4 = 0;
      goto LAB_1003d7ed;
    }
  }
  puVar7[1] = &DAT_1006aa80;
  puVar7[2] = &DAT_1006af48;
  puVar7[0x297] = &DAT_1006b078;
LAB_1003d78b:
  *(undefined1 *)(puVar7 + 0x2a1) = 1;
  puVar7[0x270] = puVar7 + 0x531;
  param_3 = (int *)0x1c4;
  puVar7[0x271] = puVar7 + 0x532;
  puVar7[0x272] = puVar7 + 0x533;
  FUN_10042b7c(puVar7 + 0x250,local_c0,(uint *)&param_3);
  puVar8 = local_c0;
  puVar3 = puVar7 + 0x564;
  for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar3 = puVar3 + 1;
  }
LAB_1003d817:
  puVar8 = puVar7 + 0x535;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = puVar7 + 0x53d;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_1005c9cc(puVar7 + 0x59d,0,0xe0);
  if (((*(uint *)(param_5 + 0x5c) & 0x100000) == 0) || ((*(uint *)(param_5 + 0x94) & 0x100000) == 0)
     ) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  *(undefined1 *)((int)puVar7 + 0x227) = uVar9;
  *(undefined1 *)(puVar7 + 0x8a) = *(undefined1 *)(param_5 + 0x135);
  if ((int *)puVar7[10] == (int *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(*(int *)puVar7[10] + 0x44))();
  }
  *(undefined1 *)(puVar7 + 0x3f) = uVar9;
  return puVar7;
}

