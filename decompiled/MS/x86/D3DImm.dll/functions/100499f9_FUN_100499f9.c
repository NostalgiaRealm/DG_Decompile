/*
 * FUN_100499f9 at 100499f9
 * undefined4 __thiscall FUN_100499f9(void * this, int * param_1, int * param_2)
 * Address ranges: 100499f9-10049c1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100499f9(void *this,int *param_1,int *param_2)

{
  byte bVar1;
  BOOL BVar2;
  int iVar3;
  uint *this_00;
  undefined4 uVar4;
  bool bVar5;
  uint local_110 [63];
  void *local_14;
  uint local_10;
  undefined4 local_c;
  char local_6;
  char local_5;
  
  local_14 = this;
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar4 = 0x80070057;
  if ((((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*param_1 != 0x5c)) ||
     ((param_1[1] & 0xffff8000U) != 0)) goto LAB_10049ba0;
  if (*param_2 == 0x16c) {
    bVar1 = FUN_1003cfc4((int)param_1);
LAB_10049a81:
    iVar3 = -0x7789ff9c;
    local_c = 0x88760064;
    if (bVar1 == 0) {
      uVar4 = 0x88760064;
      goto LAB_10049ba0;
    }
  }
  else {
    if (*param_2 == 0x1ac) {
      bVar1 = FUN_1003d0f5((int)param_1);
      goto LAB_10049a81;
    }
    if (*param_2 == 0x20c) {
      bVar1 = FUN_1003d229((int)param_1);
      goto LAB_10049a81;
    }
    iVar3 = -0x7ff8ffa9;
    local_c = 0x80070057;
  }
  uVar4 = local_c;
  if (iVar3 != -0x7ff8ffa9) {
    local_c = 0x887600ff;
    FUN_1003d3af(param_2,'\0');
    FUN_1003d3af(param_2,'\x01');
    local_5 = '\0';
    local_6 = '\0';
    local_10 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    do {
      this_00 = (uint *)((&PTR_DAT_1005dcec)[*(int *)((int)this + 0x98)] + local_10 * 0x298);
      if (*param_2 == 0x16c) {
        FUN_1003cba7(this_00,local_110);
      }
      else if (*param_2 == 0x1ac) {
        FUN_1003cc8f(this_00,local_110);
      }
      else if (*param_2 == 0x20c) {
        FUN_1003cd2c(this_00,local_110);
      }
      uVar4 = FUN_10048cd5((int)param_1,(int)local_110,this_00,(byte)this_00[8]);
      if ((char)uVar4 != '\0') {
        local_c = 0;
        if ((*(byte *)(param_1 + 1) & 4) != 0) {
          FUN_1003d361(param_2,local_110,(char)this_00[8]);
          bVar5 = (char)this_00[8] == '\0';
LAB_10049b8b:
          FUN_1003d3af(param_2,bVar5);
          param_2[1] = *this_00;
          param_2[2] = this_00[1];
          param_2[3] = this_00[2];
          param_2[4] = this_00[3];
          uVar4 = local_c;
          break;
        }
        if (local_5 == '\0') {
          FUN_1003d361(param_2,local_110,(char)this_00[8]);
          FUN_1003d3af(param_2,(char)this_00[8] == '\0');
          local_5 = '\x01';
          param_2[1] = *this_00;
          param_2[2] = this_00[1];
          param_2[3] = this_00[2];
          param_2[4] = this_00[3];
          local_6 = (char)this_00[8];
        }
        else if ((local_6 != '\0') && ((char)this_00[8] == '\0')) {
          FUN_1003d361(param_2,local_110,'\0');
          bVar5 = true;
          goto LAB_10049b8b;
        }
      }
      local_10 = local_10 + 1;
      this = local_14;
      uVar4 = local_c;
    } while (local_10 < 7);
  }
LAB_10049ba0:
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

