/*
 * FUN_10058c50 at 10058c50
 * undefined __thiscall FUN_10058c50(void * this, int * param_1, uint param_2, uint param_3, int param_4, int param_5, int * param_6)
 * Address ranges: 10058c50-10058dad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10058c50(void *this,int *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  local_8 = -1;
  if (param_1[3] != -1) {
    local_c = param_1[3];
    do {
      iVar2 = *param_1;
      iVar6 = local_c * 0x20;
      iVar5 = *(int *)(iVar2 + 0x18 + iVar6);
      if (iVar5 == 0) {
        return;
      }
      if (param_4 == 0) {
        return;
      }
      uVar1 = *(uint *)(iVar2 + 0x14 + iVar6);
      if ((param_3 < uVar1) || ((param_3 == uVar1 && (param_2 < *(uint *)(iVar2 + 0x10 + iVar6)))))
      {
        iVar5 = *(int *)(iVar2 + 0x1c + iVar6);
        local_8 = local_c;
      }
      else {
        if ((iVar5 == param_5) && (param_6[1] == 0)) {
          piVar4 = (int *)FUN_1005918d((void *)((int)this + 0x3c),(uint *)(iVar6 + 8 + iVar2));
          if (piVar4 != (int *)0x0) {
            iVar5 = iVar2 + iVar6;
            *param_6 = (piVar4[1] - *(int *)(iVar5 + 8)) + *(int *)(iVar2 + iVar6);
            param_6[1] = *piVar4;
            iVar3 = *(int *)(iVar2 + 4 + iVar6);
            param_6[2] = *(int *)(iVar2 + iVar6);
            param_6[3] = iVar3;
            iVar3 = *(int *)(iVar5 + 0xc);
            param_6[4] = *(int *)(iVar5 + 8);
            param_6[5] = iVar3;
          }
        }
        else {
          FUN_10058b91(this,iVar5,*(int *)(iVar2 + iVar6),*(undefined4 *)(iVar2 + 4 + iVar6),
                       *(uint *)(iVar2 + 8 + iVar6),*(uint *)(iVar2 + 0xc + iVar6));
        }
        iVar5 = *(int *)(iVar2 + 0x1c + iVar6);
        *(undefined4 *)(iVar2 + 0x18 + iVar6) = 0;
        if ((iVar5 == -1) || (*(int *)(*param_1 + 0x18 + iVar5 * 0x20) == 0)) {
          if (local_8 != -1) {
            param_1[4] = local_8;
          }
        }
        else {
          if (local_8 == -1) {
            param_1[3] = iVar5;
          }
          else {
            *(int *)(*param_1 + 0x1c + local_8 * 0x20) = iVar5;
          }
          *(undefined4 *)(iVar2 + 0x1c + iVar6) =
               *(undefined4 *)(*param_1 + 0x1c + param_1[4] * 0x20);
          *(int *)(*param_1 + 0x1c + param_1[4] * 0x20) = local_c;
        }
      }
      param_4 = param_4 + -1;
      local_c = iVar5;
    } while (iVar5 != -1);
  }
  return;
}

