/*
 * FUN_1006c237 at 1006c237
 * undefined4 __thiscall FUN_1006c237(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5, int param_6, RECT * param_7)
 * Address ranges: 1006c237-1006c41c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1006c237(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,RECT *param_7)

{
  char cVar1;
  uint uVar2;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  RECT RStack_a4;
  int aiStack_94 [7];
  undefined1 local_78 [20];
  short sStack_64;
  short sStack_62;
  byte bStack_50;
  undefined1 auStack_48 [48];
  byte bStack_18;
  
  uVar2 = IsRectEmpty(param_7);
  if (uVar2 == 0) {
    (**(code **)(**(int **)(param_2 + 0xc) + 0x28))(*(int **)(param_2 + 0xc),local_78);
    RStack_a4.right = *(LONG *)((int)this + 0x14);
    RStack_a4.bottom = *(LONG *)((int)this + 0x18);
    RStack_a4.left = 0;
    RStack_a4.top = 0;
    BVar3 = EqualRect(&RStack_a4,param_7);
    if (((BVar3 == 0) || (sStack_62 != 1)) || (sStack_64 != 1)) {
      cStack_c8 = '\0';
      cVar6 = '\0';
      cVar1 = FUN_100306bf(*(int *)((int)this + 0x34));
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc),auStack_48);
        if (((bStack_50 & 2) != 0) || (cVar6 = '\0', (bStack_18 & 2) != 0)) {
          cVar6 = '\x01';
        }
      }
    }
    else {
      cStack_c8 = '\x01';
      cVar6 = '\0';
    }
    uStack_ac = *(int *)((int)this + 0x2c) * param_6 + param_5;
    iStack_b0 = 1;
    if ((&DAT_100b05d0)[*(int *)((int)this + 0x1c)] != '\0') {
      iStack_b0 = 4;
    }
    uVar2 = *(uint *)((int)this + 0x14) >> ((byte)param_5 & 0x1f);
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    uStack_b4 = ~(iStack_b0 - 1U);
    uStack_a8 = (uVar2 - 1) + iStack_b0 & uStack_b4;
    uVar2 = *(uint *)((int)this + 0x18) >> ((byte)param_5 & 0x1f);
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    uVar4 = uVar2 + iStack_b0 + -1 & uStack_b4;
    uVar2 = param_7->left;
    uVar5 = param_7->top;
    uStack_bc = param_7->right;
    uStack_b8 = param_7->bottom;
    if ((&DAT_100b05d0)[*(int *)((int)this + 0x1c)] != '\0') {
      uVar2 = uVar2 & uStack_b4;
      uStack_bc = (uStack_bc - 1) + iStack_b0 & uStack_b4;
      uVar5 = uVar5 & uStack_b4;
      uStack_b8 = (uStack_b8 - 1) + iStack_b0 & uStack_b4;
    }
    uStack_c4 = uVar2;
    uStack_c0 = uVar5;
    FUN_1007923c(this,aiStack_94);
    if ((aiStack_94[0] == 0x2c) || (aiStack_94[0] == 0x2d)) {
      aiStack_94[0] = 0x27;
    }
    FUN_1006952f(*(void **)((int)this + 0xe0),param_2,param_1,*(uint *)(param_2 + 0xc),
                 *(uint *)(param_1 + 0xc),uStack_a8,uVar4,uStack_ac,uStack_a8,uVar4,uStack_ac,
                 aiStack_94[0],aiStack_94[0],0,uVar2,uVar5,(int *)&uStack_c4,1,1,cStack_c8,cVar6);
    BVar3 = SetRectEmpty(param_7);
    uVar2 = CONCAT31((int3)((uint)BVar3 >> 8),1);
  }
  else {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

