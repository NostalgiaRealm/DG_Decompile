/*
 * FUN_1800539d0 at 1800539d0
 * undefined __fastcall FUN_1800539d0(longlong param_1, undefined8 * param_2, uint param_3, uint param_4, longlong param_5)
 * Address ranges: 1800539d0-180053c13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800539d0(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_res8 [4];
  undefined8 in_stack_ffffffffffffff88;
  uint uVar8;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar5 = param_5;
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_60 = param_3 >> 1;
  local_5c = param_4 >> 1;
  lVar2 = *(longlong *)(param_5 + 0x20);
  local_50 = (float)local_60;
  local_58 = 0;
  local_48 = 0;
  local_44 = 0x3f800000;
  local_68 = 0;
  local_4c = (float)local_5c;
  FUN_18004ae78(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x1508),1,(longlong)&local_58);
  FUN_18004adcc(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x1508),1,(longlong)&local_68);
  plVar6 = *(longlong **)((ulonglong)*(uint *)(lVar2 + 0x10) * 0x20 + 0x6d0 + param_1);
  (**(code **)(*plVar6 + 0xc0))
            (plVar6,1,(ulonglong)
                      (uint)((*(int *)(lVar5 + 0x40) + *(int *)(lVar5 + 0x38)) *
                            *(int *)(*(longlong *)(lVar5 + 8) + 0x18)) +
                      *(longlong *)(*(longlong *)(lVar5 + 8) + 8),*(undefined8 *)(lVar5 + 0x30),
             (ulonglong)uVar8 << 0x20);
  FUN_18004a7e4(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x1508),1,
                (ulonglong)
                (uint)((*(int *)(lVar5 + 0x40) + *(int *)(lVar5 + 0x38)) *
                      (int)(*(longlong **)(lVar5 + 8))[3]) + **(longlong **)(lVar5 + 8));
  FUN_1800493ac(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x1938),&param_5,
                *(uint *)(lVar2 + 0xdb4),*(int *)(lVar5 + 0x3c));
  FUN_18004abfc(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x1508),1,&param_5,0,(longlong *)0x0);
  uVar4 = param_2[1];
  lVar7 = (ulonglong)(uint)(*(int *)(lVar5 + 0x40) << 2) + 0xc;
  lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8);
  puVar1 = (undefined8 *)(lVar3 + lVar7 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  uVar4 = param_2[3];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7 * 0x10);
  *puVar1 = param_2[2];
  puVar1[1] = uVar4;
  uVar4 = param_2[5];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7 * 0x10);
  *puVar1 = param_2[4];
  puVar1[1] = uVar4;
  uVar4 = param_2[7];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7 * 0x10);
  *puVar1 = param_2[6];
  puVar1[1] = uVar4;
  FUN_18004a068(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x1508),
                *(ulonglong *)(lVar2 + 0xda0 + (ulonglong)*(uint *)(lVar5 + 0x3c) * 8),0,0,4);
  FUN_18004a068(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x1508),*(ulonglong *)(lVar5 + 0x28),0,0
                ,0x80);
  FUN_18004b1c0(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x1508),4,1,
                *(int *)(lVar5 + 0x40) * 4 + 0xc,0);
  plVar6 = FUN_1800493ac(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x1930),local_res8,
                         *(int *)(lVar2 + 0xdb0) + *(int *)(lVar5 + 0x3c),0);
  *(longlong *)(lVar5 + 0x30) = *plVar6;
  *(undefined8 *)(lVar5 + 0x28) =
       *(undefined8 *)(lVar2 + 0xda0 + (ulonglong)*(uint *)(lVar5 + 0x3c) * 8);
  *(int *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + 1;
  *(uint *)(lVar5 + 0x3c) = *(uint *)(lVar5 + 0x3c) - 1 & 1;
  return;
}

