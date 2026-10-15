/*
 * FUN_10018ac0 at 10018ac0
 * undefined __thiscall FUN_10018ac0(void * this, uint param_1, undefined4 param_2, int * param_3, int * param_4)
 * Address ranges: 10018ac0-10018d8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018ac0(void *this,uint param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int *local_2c [5];
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  FUN_10017820(this,0,0,0);
  if ((*param_3 == 0) && (*param_4 == 0)) {
    *(undefined4 *)((int)this + 0x1e64) = 0;
    *(undefined4 *)((int)this + 0x1e60) = 0;
    *(undefined4 *)((int)this + 0x1e5c) = 0;
    *(undefined4 *)((int)this + 0x1e58) = 0;
    *(undefined4 *)((int)this + 0x1ec0) = 0;
    *(undefined4 *)((int)this + 0x1ebc) = 0;
    *(undefined4 *)((int)this + 0x1eb8) = 0;
    *(undefined4 *)((int)this + 0x1eb4) = 0;
    *(undefined4 *)((int)this + 0x1e68) = 0;
    *(undefined4 *)((int)this + 0x1ee4) = 0;
    *(undefined4 *)((int)this + 0x1838) = 0;
    *(undefined4 *)((int)this + 0x183c) = 0;
    *(undefined1 *)((int)this + 0x1908) = 1;
    *(undefined1 *)((int)this + 0x1d3a) = 1;
    return;
  }
  uVar7 = 0;
  local_2c[0] = (int *)0x0;
  local_2c[1] = (int *)0x0;
  local_2c[2] = (int *)0x0;
  local_2c[3] = (int *)0x0;
  if (param_1 != 0) {
    do {
      local_c = 0;
      piVar8 = (int *)(param_3[uVar7 * 3] + -0x88);
      if (param_3[uVar7 * 3] == 0) {
        piVar8 = (int *)0x0;
      }
      local_2c[uVar7] = piVar8;
      uVar7 = uVar7 + 1;
      this = local_8;
    } while (uVar7 < param_1);
  }
  uVar7 = 0;
  local_2c[4] = local_2c[0];
  piVar8 = (int *)(*param_4 + -0x88);
  if (*param_4 == 0) {
    piVar8 = (int *)0x0;
  }
  local_14 = piVar8;
  do {
    piVar2 = *(int **)((int)this + uVar7 * 4 + 0x1e94);
    if ((piVar2 != (int *)0x0) &&
       ((((*(int **)((int)this + 0x1e58) == piVar2 || (*(int **)((int)this + 0x1e68) == piVar2)) ||
         (local_2c[0] == piVar2)) || (piVar8 == piVar2)))) {
      *(undefined1 *)((int)this + 0x1d39) = 1;
      pbVar5 = (byte *)((int)this + ((int)uVar7 >> 3) + 0x1d30);
      *pbVar5 = *pbVar5 | '\x01' << (uVar7 & 7);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  uVar7 = 0;
  if (param_1 != 0) {
    local_8 = (void *)((int)this + 0x1eb4);
    local_c = (int)this + 0x1e6c;
    do {
      local_18 = (int)this + 0x1e58;
      piVar2 = local_2c[uVar7];
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(local_18 + uVar7 * 4) = 0;
        iVar9 = 0;
        *(undefined4 *)((int)this + uVar7 * 4 + 0x1eb4) = 0;
        *(undefined4 *)((int)this + uVar7 * 4 + 0x1e6c) = 0;
      }
      else {
        iVar9 = piVar2[0xb];
        iVar3 = param_3[uVar7 * 3 + 2];
        iVar4 = param_3[uVar7 * 3 + 1];
        *(int **)(local_18 + uVar7 * 4) = piVar2;
        *(undefined4 *)((int)this + uVar7 * 4 + 0x1eb4) =
             *(undefined4 *)(piVar2[0x18] + (iVar9 * iVar3 + iVar4) * 0x1c);
        *(int *)((int)this + uVar7 * 4 + 0x1e6c) = param_3[uVar7 * 3 + 1];
        iVar9 = param_3[uVar7 * 3 + 2];
        local_10 = iVar9;
      }
      *(int *)((int)this + uVar7 * 4 + 0x1e7c) = iVar9;
      uVar7 = uVar7 + 1;
      local_c = (int)this + 0x1e6c;
      local_8 = (void *)((int)this + 0x1eb4);
    } while (uVar7 < param_1);
  }
  if (*(int **)((int)this + 0x1e58) == (int *)0x0) {
    bVar10 = false;
  }
  else {
    cVar6 = (**(code **)(**(int **)((int)this + 0x1e58) + 0x40))();
    bVar10 = cVar6 != '\0';
  }
  cVar6 = *(char *)((int)this + 0x1900);
  *(bool *)((int)this + 0x1900) = bVar10;
  *(byte *)((int)this + 0x1d3c) = *(byte *)((int)this + 0x1d3c) | bVar10 != (bool)cVar6;
  if (piVar8 == (int *)0x0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (**(code **)(*piVar8 + 0x44))();
  }
  cVar1 = *(char *)((int)this + 0x1842);
  *(char *)((int)this + 0x1842) = cVar6;
  *(byte *)((int)this + 0x1d3b) = *(byte *)((int)this + 0x1d3b) | cVar6 != cVar1;
  if (piVar8 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x1e68) = 0;
    *(undefined4 *)((int)this + 0x1ee4) = 0;
  }
  else {
    iVar9 = piVar8[0xb];
    iVar3 = param_4[2];
    iVar4 = param_4[1];
    *(int **)((int)this + 0x1e68) = piVar8;
    *(undefined4 *)((int)this + 0x1ee4) =
         *(undefined4 *)(piVar8[0x18] + 4 + (iVar9 * iVar3 + iVar4) * 0x1c);
    *(int *)((int)this + 0x1e8c) = param_4[1];
    *(int *)((int)this + 0x1e90) = param_4[2];
  }
  if (local_2c[4] != (int *)0x0) {
    piVar8 = local_2c[4];
  }
  FUN_1002c5b0(this,piVar8);
  FUN_1002c740(this,piVar8);
  *(undefined1 *)((int)this + 0x1d3a) = 1;
  return;
}

