/*
 * FUN_180083b10 at 180083b10
 * undefined FUN_180083b10(void)
 * Address ranges: 180083b10-180083d6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180083b10(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5,
             undefined4 *param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  uint uVar6;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined4 uStack_8c;
  uint local_80;
  undefined1 auStack_70 [8];
  int local_68;
  int local_64;
  
  iVar3 = (*__imp_USER32_dll_IsRectEmpty)(param_6);
  if (iVar3 == 0) {
    (**(code **)(*param_3 + 0x50))(param_3,auStack_70);
    local_a8 = *(undefined4 *)(param_1 + 0x24);
    uStack_a4 = *(undefined4 *)(param_1 + 0x28);
    local_b0 = 0;
    FUN_1800e5470(*(undefined8 *)(param_1 + 0x50),extraout_x1,param_1);
    iVar3 = (*__imp_USER32_dll_EqualRect)(&local_b0,param_6);
    if (((iVar3 == 0) || (local_68 != 1)) || (local_64 != 1)) {
      if (*(int *)(param_1 + 0x44) - 3U < 3) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_a0);
        uVar1 = local_80 & 0x40;
        (**(code **)(*param_3 + 0x50))(param_3,&local_a0);
        uVar6 = local_80 >> 6 & 1;
        if (uVar1 != 0) {
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0;
      }
      iVar3 = param_4 + *(int *)(param_1 + 0x3c) * param_5;
      if (uVar6 == 0) {
        local_94 = param_6[2];
        local_90 = param_6[3];
        uVar1 = *(uint *)(param_1 + 0x2c);
        local_a0 = *param_6;
        uStack_9c = param_6[1];
        uStack_8c = 1;
        local_98 = 0;
        bVar2 = (&DAT_1802316d8)[uVar1];
        if ((*(uint *)(param_1 + 0x24) >> (ulonglong)(param_4 & 0x1f) < (uint)bVar2) &&
           ((&DAT_1802315f8)[uVar1] != '\0')) {
          local_94 = (bVar2 + local_94) - 1 & -(uint)bVar2;
        }
        bVar2 = (&DAT_180231708)[uVar1];
        if ((*(uint *)(param_1 + 0x28) >> (ulonglong)(param_4 & 0x1f) < (uint)bVar2) &&
           ((&DAT_1802315f8)[uVar1] != '\0')) {
          local_90 = (bVar2 + local_90) - 1 & -(uint)bVar2;
        }
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
        (**(code **)(*plVar4 + 0x170))
                  (plVar4,param_2,iVar3,local_a0,uStack_9c,0,param_3,iVar3,&local_a0);
      }
      else {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
        (**(code **)(*plVar4 + 0x170))(plVar4,param_2,iVar3,0,0,0,param_3,iVar3,0);
      }
    }
    else {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      (**(code **)(*plVar4 + 0x178))(plVar4,param_2,param_3);
    }
    (*__imp_USER32_dll_SetRectEmpty)(param_6);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0x50) + 0x620);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

