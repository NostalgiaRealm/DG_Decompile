/*
 * FUN_100449c0 at 100449c0
 * int __thiscall FUN_100449c0(void * this, undefined4 param_1, uint param_2)
 * Address ranges: 100449c0-10044d08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall FUN_100449c0(void *this,undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar3;
  int iVar4;
  ushort in_FPUControlWord;
  uint *local_34;
  uint local_30;
  uint local_2c;
  uint **local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar3 == 0) {
    FUN_1003c603();
  }
  iVar4 = -0x7ff8ffa9;
  local_14 = -0x7ff8ffa9;
  if (((*(char *)((int)this + 0x1750) != '\0') && (*(char *)((int)this + 0x1751) != '\0')) &&
     (*(uint *)((int)this + 0x167c) <= *(uint *)((int)this + 0x1744))) {
    local_14 = 0;
    local_18 = *(uint *)((int)this + 0x1740) -
               *(uint *)((int)this + 0x1740) % *(uint *)((int)this + 0x1680);
    if (local_18 != 0) {
      uVar1 = *(uint *)((int)this + 0x1734);
      local_24 = CONCAT31(local_24._1_3_,~(byte)(uVar1 >> 3)) & 0xffffff01;
      local_1c = CONCAT31(local_1c._1_3_,~(byte)(uVar1 >> 2)) & 0xffffff01;
      local_c = *(int *)((int)this + 0x1674);
      local_20 = CONCAT31(local_20._1_3_,~(byte)(uVar1 >> 4)) & 0xffffff01;
      local_30 = *(uint *)((int)this + 0x1748);
      local_10 = *(int *)((int)this + 0x1678);
      if (local_30 == 0) {
        BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
        if (BVar3 == 0) {
          FUN_1003c603();
        }
        local_34 = &local_30;
        local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
        local_30 = in_FPUControlWord | 0x80000000;
        if ((in_FPUControlWord & 0xf3f) != 0x23f) {
          local_30 = (uint)in_FPUControlWord;
          local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
        }
        if ((local_c != 0) && (local_18 < 0x10000)) {
          if ((local_10 - 1U < 6) || (param_2 == 2)) {
            if ((*(int *)((int)this + 0x1688) == 3) && (param_2 != 2)) {
              iVar4 = -0x7789fd1f;
            }
            else {
              iVar4 = 0;
            }
            if ((*(int *)((int)this + 0x1688) != 3) && (local_10 - 1U < 6)) {
              iVar4 = *(int *)((int)this + 0x18);
              iVar2 = *(int *)((int)this + 0x28);
              if (((iVar4 == 0) || (*(char *)(iVar4 + 9) == '\0')) &&
                 ((iVar2 == 0 || (*(char *)(iVar2 + 9) == '\0')))) {
                if (((iVar4 == 0) || (*(char *)(iVar4 + 8) == '\0')) &&
                   ((iVar2 == 0 || (*(char *)(iVar2 + 8) == '\0')))) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = -0x7789fe3e;
                }
              }
              else {
                iVar4 = -0x7789fe52;
              }
              if (-1 < iVar4) {
                iVar4 = FUN_10042e08(this,local_10,(int)this + 0x1684,local_c,local_18,0,0,param_2,
                                     (char)local_24,(byte)local_20,(char)local_1c);
              }
            }
          }
          else {
            iVar4 = -0x7789fd20;
          }
        }
      }
      else {
        local_2c = *(uint *)((int)this + 0x174c);
        BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
        if (BVar3 == 0) {
          FUN_1003c603();
        }
        local_28 = &local_34;
        local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
        local_34 = (uint *)(in_FPUControlWord | 0x80000000);
        if ((in_FPUControlWord & 0xf3f) != 0x23f) {
          local_34 = (uint *)(uint)in_FPUControlWord;
          local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
        }
        if ((local_c != 0) && (local_18 < 0x10000)) {
          if ((local_10 - 1U < 6) || (param_2 == 2)) {
            if ((*(int *)((int)this + 0x1688) == 3) && (param_2 != 2)) {
              iVar4 = -0x7789fd1f;
            }
            else {
              iVar4 = 0;
            }
            if ((*(int *)((int)this + 0x1688) != 3) && (local_10 - 1U < 6)) {
              iVar4 = *(int *)((int)this + 0x18);
              iVar2 = *(int *)((int)this + 0x28);
              if (((iVar4 == 0) || (*(char *)(iVar4 + 9) == '\0')) &&
                 ((iVar2 == 0 || (*(char *)(iVar2 + 9) == '\0')))) {
                if (((iVar4 == 0) || (*(char *)(iVar4 + 8) == '\0')) &&
                   ((iVar2 == 0 || (*(char *)(iVar2 + 8) == '\0')))) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = -0x7789fe3e;
                }
              }
              else {
                iVar4 = -0x7789fe52;
              }
              if (-1 < iVar4) {
                iVar4 = FUN_10042e08(this,local_10,(int)this + 0x1684,local_30,local_2c,local_c,
                                     local_18,param_2,(char)local_24,(byte)local_20,(char)local_1c);
              }
            }
          }
          else {
            iVar4 = -0x7789fd20;
          }
        }
      }
      LeaveCriticalSection(DAT_1006bbd0);
      if (param_2 != 2) {
        local_14 = iVar4;
      }
    }
  }
  lpCriticalSection = DAT_1006bbd0;
  *(undefined1 *)((int)this + 0x1750) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return local_14;
}

