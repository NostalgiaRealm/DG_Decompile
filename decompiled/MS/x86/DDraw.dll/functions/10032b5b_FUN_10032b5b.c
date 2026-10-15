/*
 * FUN_10032b5b at 10032b5b
 * int __thiscall FUN_10032b5b(void * this, int * param_1, undefined4 * param_2, uint param_3, int param_4)
 * Address ranges: 10032b5b-10032da4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10032b5b(void *this,int *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *this_00;
  byte bVar4;
  BOOL BVar5;
  LONG *pLVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int extraout_ECX;
  int local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  RECT local_28;
  RECT local_18;
  
  local_34 = this;
  BVar5 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar5 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  local_38 = -0x7ff8ffa9;
  if ((param_2 != (undefined4 *)0x0) && (param_4 == 0)) {
    local_2c = param_3 & 0x30;
    if (local_2c != 0x30 && (param_3 & 0xffff87cc) == 0) {
      param_2[9] = 0;
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = *(int *)((int)this + 0x15c);
      local_28.bottom = *(int *)((int)this + 0x158);
      if (((param_1 != (int *)0x0) && (*param_1 != param_1[2])) && (param_1[1] != param_1[3])) {
        local_28.left = *param_1;
        local_28.top = param_1[1];
        local_28.right = param_1[2];
        local_28.bottom = param_1[3];
        this = local_34;
      }
      pLVar6 = FUN_1003610d(this,&local_28,&local_18.left);
      this_00 = local_34;
      local_28.left = *pLVar6;
      local_28.top = pLVar6[1];
      local_28.right = pLVar6[2];
      local_28.bottom = pLVar6[3];
      uVar7 = FUN_100313c3((int)(local_34 + 0x54));
      piVar8 = (int *)FUN_10031403(extraout_ECX);
      uVar9 = this_00[0x57];
      local_30 = uVar9;
      if (uVar7 <= uVar9) {
        local_30 = uVar7;
      }
      piVar1 = (int *)this_00[0x56];
      local_34 = piVar1;
      if (piVar8 <= piVar1) {
        local_34 = piVar8;
      }
      if ((((local_28.left < local_28.right) && (local_28.top < local_28.bottom)) &&
          ((-1 < local_28.left && ((local_28.right <= (int)uVar9 && (-1 < local_28.top)))))) &&
         (local_28.bottom <= (int)piVar1)) {
        if (((uint)this_00[0x67] >> 2 & 1) != 0) {
          uVar9 = FUN_10032056((uint *)&local_28,local_30,(int)local_34);
          if ((char)uVar9 == '\0') goto LAB_10032d8c;
          uVar9 = this_00[0x57];
        }
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = uVar9;
        local_18.bottom = (LONG)piVar1;
        BVar5 = EqualRect(&local_18,&local_28);
        local_38 = -0x7fffbfff;
        local_30 = CONCAT31(local_30._1_3_,'\x01' - (BVar5 != 1));
        if ((param_3 & 2) == 0) {
          local_34 = (int *)0x0;
          local_38 = FUN_100321f0(this_00,(int)param_1,param_2,(int *)&local_34,&local_28,
                                  (param_3 >> 8 & 0x40 | local_2c) >> 4,local_30,'\0');
          if (-1 < local_38) {
            iVar2 = this_00[1];
            if ((*(int *)(iVar2 + 0x9c) == 0) && (*(int *)(iVar2 + 0xa4) != 0)) {
              bVar4 = 1;
            }
            else {
              bVar4 = 0;
            }
            *(byte *)(iVar2 + 0xad) = *(byte *)(iVar2 + 0xad) | bVar4;
            iVar2 = this_00[1];
            uVar3 = param_2[4];
            *(int **)(iVar2 + 0x9c) = local_34;
            *(undefined4 *)(iVar2 + 0xa0) = uVar3;
            FUN_10006662(this_00[1]);
          }
        }
      }
    }
  }
LAB_10032d8c:
  LeaveCriticalSection(DAT_1006c254);
  return local_38;
}

