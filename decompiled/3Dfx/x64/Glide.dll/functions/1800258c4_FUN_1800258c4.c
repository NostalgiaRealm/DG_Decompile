/*
 * FUN_1800258c4 at 1800258c4
 * undefined __fastcall FUN_1800258c4(longlong param_1, longlong param_2, undefined4 * param_3, char param_4)
 * Address ranges: 1800258c4-180025ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800258c4(longlong param_1,longlong param_2,undefined4 *param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_70 = 1;
  local_40 = 0;
  local_68 = 0;
  uVar4 = (ulonglong)(-(uint)(param_4 != '\0') & 0x30);
  uStack_30 = 0;
  local_78 = *(undefined8 *)(uVar4 + 0x120 + param_2);
  local_38 = 0;
  local_28 = 0;
  uStack_20 = 0;
  _uStack_60 = CONCAT44(*(undefined4 *)(param_2 + 0x20),
                        *(undefined4 *)
                         ((ulonglong)(-(uint)(param_4 != '\0') & 0x30) + 0x134 + param_2));
  _local_58 = CONCAT44(1,*(undefined4 *)(param_2 + 0x24));
  uStack_50 = (ulonglong)*(uint *)((ulonglong)(-(uint)(param_4 != '\0') & 0x30) + 0x138 + param_2);
  local_48 = *(ulonglong *)((ulonglong)(-(uint)(param_4 != '\0') & 0x30) + 0x110 + param_2);
  piVar1 = (int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508) +
                  0x684);
  *piVar1 = *piVar1 + 1;
  FUN_180047f04(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                local_48,0,0,0x400);
  FUN_180047f04(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                *(ulonglong *)(uVar4 + 0x120 + param_2),0,1,0x800);
  FUN_180048f04(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                &local_48,*param_3,param_3[1],0,&local_78,param_3);
  FUN_180047f04(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                *(ulonglong *)(uVar4 + 0x120 + param_2),0,1,0);
  uVar3 = FUN_180047fe0(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508));
  *(undefined8 *)(param_2 + 0xd0) = uVar3;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508);
  piVar1 = (int *)(lVar2 + 0x684);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
    FUN_180047cd4(lVar2 + 8,'\0');
  }
  return;
}

