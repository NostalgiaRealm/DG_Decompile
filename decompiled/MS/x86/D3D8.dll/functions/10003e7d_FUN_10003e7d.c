/*
 * FUN_10003e7d at 10003e7d
 * int __thiscall FUN_10003e7d(void * this, uint param_1, int param_2, int param_3, int param_4, undefined4 param_5)
 * Address ranges: 10003e7d-10004050
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10003e7d(void *this,uint param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint local_98;
  int local_94;
  uint local_90;
  LPVOID local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_78;
  int local_74 [7];
  int local_58;
  undefined1 local_b;
  
  local_88 = (LPVOID)0x0;
  local_84 = 0;
  local_80 = 0;
  local_94 = 0;
  local_90 = 0;
  local_98 = 0;
  do {
    if (param_1 <= local_98) break;
    local_74[0] = 0;
    local_74[1] = 0;
    local_74[2] = 0;
    local_74[3] = 0;
    local_74[4] = 0;
    local_74[5] = 0;
    local_94 = FUN_10003e23(this,*(int *)(param_2 + local_98 * 0x3c),
                            (int *)(param_2 + 4 + local_98 * 0x3c),'\0',&local_78);
    uVar1 = local_58 * local_74[6];
    if (local_90 <= uVar1 && uVar1 - local_90 != 0) {
      piVar5 = local_74;
      piVar6 = (int *)((int)this + 0xadc);
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      *(int *)((int)this + 0xaf4) = local_74[6];
      *(int *)((int)this + 0xaf8) = local_58;
      *(undefined1 *)((int)this + 0xafc) = local_b;
      local_90 = uVar1;
    }
    if ((-1 < local_94) && (uVar2 = FUN_10007aa7(&local_88,&local_78), (char)uVar2 == '\0')) {
      local_94 = -0x7fffbffb;
      goto LAB_10004035;
    }
    local_98 = local_98 + 1;
  } while (-1 < local_94);
  iVar4 = 0;
  while (-1 < local_94) {
    uVar1 = 0;
    if ((int)param_1 <= iVar4) goto LAB_10004035;
    if (*(int *)((int)this + 0xb04) == 1) {
      uVar1 = FUN_1000faa5((int)(iVar4 * 0x70 + (int)local_88));
    }
    iVar3 = *(int *)((int)this + 0xb2c) * 0x228;
    local_94 = -0x7789fe84;
    if ((*(int *)(&DAT_100ba91c + iVar3) != 0) || (uVar1 <= *(uint *)(&DAT_100ba918 + iVar3))) {
      local_94 = (**(code **)(*(int *)this + 4))
                           ((LPVOID)((int)local_88 + iVar4 * 0x70),
                            *(undefined4 *)(param_2 + 0x38 + iVar4 * 0x3c),uVar1,param_5,0,
                            iVar4 == 0,param_3 + iVar4 * 4,param_4 + iVar4 * 4);
    }
    iVar4 = iVar4 + 1;
  }
  while (iVar4 = iVar4 + -1, 0 < iVar4) {
    (**(code **)(*(int *)this + 8))(*(undefined4 *)(param_3 + -4 + iVar4 * 4),0);
    *(undefined4 *)(param_3 + -4 + iVar4 * 4) = 0;
  }
LAB_10004035:
  thunk_FUN_100ad48c(local_88);
  return local_94;
}

