/*
 * FUN_1002df19 at 1002df19
 * uint __thiscall FUN_1002df19(void * this, void * param_1, RECT * param_2, int param_3, int param_4, uint * param_5)
 * Address ranges: 1002df19-1002e1cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1002df19(void *this,void *param_1,RECT *param_2,int param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  RECT local_4c;
  RECT local_3c;
  byte *local_2c;
  uint local_28;
  uint *local_24;
  int *local_20;
  void *local_1c;
  uint *local_18;
  int local_14;
  uint local_10;
  char local_9;
  
  local_10 = CONCAT31(local_10._1_3_,1);
  puVar1 = param_5 + 5;
  local_24 = puVar1;
  local_1c = this;
  if (param_5[4] == 0) {
    local_3c.left = 0;
    local_3c.top = 0;
    local_3c.right = *(int *)((int)this + 0x15c);
    local_3c.bottom = *(int *)((int)this + 0x158);
    BVar4 = EqualRect(&local_3c,param_2);
    local_28 = CONCAT31(local_28._1_3_,'\x01' - (BVar4 != 1));
    FUN_10006569(*(void **)((int)this + 4));
    uVar5 = FUN_1003277e(local_1c,2,local_28,(int *)(param_5 + 4),(int *)puVar1,'\0');
    local_10 = uVar5 >> 0x1f ^ 1;
    if ((char)local_10 == '\0') {
      return local_10;
    }
  }
  puVar2 = param_5 + 7;
  local_2c = (byte *)(*(int *)((int)this + 4) + 0x1e);
  local_14 = param_2->right - param_2->left;
  local_28 = param_2->bottom - param_2->top;
  puVar8 = (undefined4 *)(*puVar1 * param_2->top + (uint)*local_2c * param_2->left + param_5[4]);
  local_20 = (int *)((int)param_1 + 0x15c);
  local_18 = puVar2;
  if (param_5[6] == 0) {
    local_4c.right = *local_20;
    local_4c.bottom = *(LONG *)((int)param_1 + 0x158);
    local_3c.left = param_3;
    local_3c.right = param_3 + local_14;
    local_3c.bottom = local_28 + param_4;
    local_4c.left = 0;
    local_4c.top = 0;
    local_3c.top = param_4;
    BVar4 = EqualRect(&local_4c,&local_3c);
    local_10 = CONCAT31(local_10._1_3_,'\x01' - (BVar4 != 1));
    FUN_10006569(*(void **)((int)param_1 + 4));
    uVar5 = FUN_1003277e(param_1,1,local_10,(int *)(param_5 + 6),(int *)puVar2,'\0');
    local_10 = uVar5 >> 0x1f ^ 1;
  }
  if ((char)local_10 == '\0') {
    return local_10;
  }
  local_9 = *(char *)((int)param_5 + 5);
  uVar5 = *puVar2;
  if (local_9 != '\0') {
    param_4 = param_4 + -1;
    uVar5 = -uVar5;
  }
  uVar6 = (uint)*local_2c;
  uVar3 = param_5[3];
  puVar7 = (undefined4 *)(uVar6 * param_3 + *local_18 * param_4 + param_5[6]);
  if (uVar3 == 0) {
    if ((((local_14 == *(int *)((int)local_1c + 0x15c)) && (local_14 == *local_20)) &&
        (uVar6 * local_14 - *local_24 == 0)) &&
       ((uint)*(byte *)(*(int *)((int)param_1 + 4) + 0x1e) * local_14 - *local_18 == 0)) {
      FUN_10060d80(puVar8,puVar7,*local_24 * local_28);
      return local_10;
    }
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 != 2) {
        return local_10;
      }
      if (uVar6 == 1) {
        FUN_1002d888(&param_2->left,0,0,param_5,(int)puVar7,uVar5,(int)puVar8);
        return local_10;
      }
      if (uVar6 == 2) {
        FUN_1002dacc(&param_2->left,0,0,param_5,(int)puVar7,uVar5,(int)puVar8);
        return local_10;
      }
      if (uVar6 != 4) {
        return local_10;
      }
      FUN_1002dd0b(&param_2->left,0,0,param_5,(int)puVar7,uVar5,(int)puVar8);
      return local_10;
    }
    if ((local_9 == '\0') || ((char)param_5[1] != '\0')) {
      if (uVar6 == 1) {
        FUN_1002d572(&param_2->left,0,0,(int)param_5,(int)puVar7,uVar5,(int)puVar8);
        return local_10;
      }
      if (uVar6 != 2) {
        if (uVar6 != 4) {
          return local_10;
        }
        FUN_1002d790(&param_2->left,0,0,(int)param_5,(int)puVar7,uVar5,(int)puVar8);
        return local_10;
      }
      FUN_1002d68f(&param_2->left,0,0,(int)param_5,(int)puVar7,uVar5,(int)puVar8);
      return local_10;
    }
  }
  FUN_1002d4ea((int)param_2,(int)param_5,puVar7,uVar5,puVar8,uVar6 * local_14);
  return local_10;
}

