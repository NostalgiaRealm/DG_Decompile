/*
 * FUN_180098104 at 180098104
 * undefined __fastcall FUN_180098104(longlong param_1, longlong param_2, longlong param_3, ulonglong param_4, uint param_5)
 * Address ranges: 180098104-180098238
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180098104(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,uint param_5
                  )

{
  int *piVar1;
  longlong lVar2;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined4 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_78 = param_4 & 0xffffffff;
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0x684);
  *piVar1 = *piVar1 + 1;
  local_88 = *(undefined8 *)(param_2 + 0x14);
  local_58 = *(ulonglong *)(param_3 + 0x14);
  local_48 = (ulonglong)param_5;
  local_60 = 0;
  local_50 = 0;
  local_30 = 0;
  local_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),local_58,local_48,0,0x400);
  FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(ulonglong *)(param_2 + 0x14),param_4 & 0xffffffff,0,0x800);
  FUN_1800e3ee8(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),&local_58,0,0,0,&local_88,0
               );
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  piVar1 = (int *)(lVar2 + 0x684);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
    FUN_1800e2ae8(lVar2 + 8,'\0');
  }
  return;
}

