/*
 * FUN_18008e9f0 at 18008e9f0
 * undefined8 __fastcall FUN_18008e9f0(longlong param_1, longlong * param_2, longlong * param_3, int param_4, int param_5, RECT * param_6)
 * Address ranges: 18008e9f0-18008ec1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18008e9f0(longlong param_1,longlong *param_2,longlong *param_3,int param_4,int param_5
                       ,RECT *param_6)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  BOOL BVar4;
  undefined4 extraout_var;
  undefined8 extraout_RAX;
  ulonglong uVar5;
  undefined1 *puVar6;
  int iVar7;
  RECT local_b8;
  LONG local_a8;
  LONG local_a4;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_88;
  undefined1 local_78 [8];
  int local_70;
  int local_6c;
  
  BVar4 = IsRectEmpty(param_6);
  if (BVar4 == 0) {
    puVar6 = local_78;
    (**(code **)(*param_3 + 0x50))(param_3);
    local_b8.right = *(LONG *)(param_1 + 0x24);
    local_b8.bottom = *(LONG *)(param_1 + 0x28);
    local_b8.left = 0;
    local_b8.top = 0;
    FUN_1800dfe48(*(longlong *)(param_1 + 0x50),puVar6,param_1);
    BVar4 = EqualRect(&local_b8,param_6);
    if (((BVar4 == 0) || (local_70 != 1)) || (local_6c != 1)) {
      if (*(int *)(param_1 + 0x44) - 3U < 3) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_a8);
        uVar1 = local_88;
        (**(code **)(*param_3 + 0x50))(param_3,&local_a8);
        bVar3 = (byte)(local_88 >> 6) & 1;
        if ((uVar1 >> 6 & 1) != 0) {
          bVar3 = 1;
        }
      }
      else {
        bVar3 = 0;
      }
      iVar7 = param_5 * *(int *)(param_1 + 0x3c) + param_4;
      if (bVar3 == 0) {
        uVar1 = *(uint *)(param_1 + 0x2c);
        local_a8 = param_6->left;
        local_a4 = param_6->top;
        local_9c = param_6->right;
        local_98 = param_6->bottom;
        local_94 = 1;
        bVar3 = (&DAT_1800fead8)[uVar1];
        local_a0 = 0;
        if ((*(uint *)(param_1 + 0x24) >> ((byte)param_4 & 0x1f) < (uint)bVar3) &&
           ((&DAT_1800fe9f8)[uVar1] != '\0')) {
          local_9c = (local_9c - 1) + (uint)bVar3 & -(uint)bVar3;
        }
        bVar3 = (&DAT_1800feb08)[uVar1];
        if ((*(uint *)(param_1 + 0x28) >> ((byte)param_4 & 0x1f) < (uint)bVar3) &&
           ((&DAT_1800fe9f8)[uVar1] != '\0')) {
          local_98 = (local_98 - 1) + (uint)bVar3 & -(uint)bVar3;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
        (**(code **)(*plVar2 + 0x170))
                  (plVar2,param_2,iVar7,local_a8,local_a4,0,param_3,iVar7,&local_a8);
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
        (**(code **)(*plVar2 + 0x170))(plVar2,param_2,iVar7,0,0,0,param_3,iVar7,0);
      }
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      (**(code **)(*plVar2 + 0x178))(plVar2,param_2,param_3);
    }
    SetRectEmpty(param_6);
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x50) + 0x620));
    uVar5 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  else {
    uVar5 = CONCAT44(extraout_var,BVar4) & 0xffffffffffffff00;
  }
  return uVar5;
}

