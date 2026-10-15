/*
 * FUN_1802172f8 at 1802172f8
 * undefined FUN_1802172f8(void)
 * Address ranges: 1802172f8-180217507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802172f8(undefined8 param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong extraout_x8;
  ulonglong uVar5;
  code *extraout_x11;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  float local_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar5 = param_3 >> 1 & 0x7fffffff;
  local_40 = 0;
  uVar4 = param_4 >> 1 & 0x7fffffff;
  local_38 = (float)uVar5;
  local_30 = 0;
  fStack_34 = (float)uVar4;
  local_48 = (undefined4)uVar5;
  uStack_44 = (undefined4)uVar4;
  lVar1 = *(longlong *)(param_5 + 0x20);
  local_50 = 0;
  local_2c = 0x3f800000;
  FUN_180209840(*(undefined8 *)(*(longlong *)(param_5 + 0x18) + 0x1508),1,&local_40);
  FUN_180209758(*(undefined8 *)(*(longlong *)(param_5 + 0x18) + 0x1508),1,&local_50);
  uVar4 = (ulonglong)
          (uint)((*(int *)(param_5 + 0x40) + *(int *)(param_5 + 0x38)) *
                *(int *)(*(longlong *)(param_5 + 8) + 0x18));
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                    (*(undefined8 *)(*(longlong *)(param_5 + 8) + 8));
  (*extraout_x11)(uVar2,1,extraout_x8 + (uVar4 & 0xffffffff),*(undefined8 *)(param_5 + 0x30),0);
  FUN_180208f00(*(undefined8 *)(*(longlong *)(param_5 + 0x18) + 0x1508),1,
                **(longlong **)(param_5 + 8) +
                (ulonglong)
                (uint)((*(int *)(param_5 + 0x40) + *(int *)(param_5 + 0x38)) *
                      (int)(*(longlong **)(param_5 + 8))[3]));
  FUN_18020d168(*(undefined8 *)(*(longlong *)(param_5 + 0x18) + 0x1938),auStack_60,
                *(undefined4 *)(lVar1 + 0xdb4),*(undefined4 *)(param_5 + 0x3c));
  FUN_1802094f8(*(undefined8 *)(*(longlong *)(param_5 + 0x18) + 0x1508),1,auStack_60,0,0);
  uVar2 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  puVar3 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_5 + 0x10) + 8) +
           (((ulonglong)*(uint *)(param_5 + 0x40) & 0x3fffffff) * 4 + 0xc) * 0x10);
  puVar3[1] = param_2[1];
  *puVar3 = uVar2;
  puVar3[3] = uVar7;
  puVar3[2] = uVar6;
  uVar2 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  puVar3[5] = param_2[5];
  puVar3[4] = uVar2;
  puVar3[7] = uVar7;
  puVar3[6] = uVar6;
  FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_5 + 0x18) + 0x1508),
                *(undefined8 *)(lVar1 + (ulonglong)*(uint *)(param_5 + 0x3c) * 8 + 0xda0),0,0,4);
  FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_5 + 0x18) + 0x1508),
                *(undefined8 *)(param_5 + 0x28),0,0,0x80);
  FUN_180209ca8(*(undefined8 *)(*(longlong *)(param_5 + 0x18) + 0x1508),4,1,
                *(int *)(param_5 + 0x40) * 4 + 0xc,0);
  puVar3 = (undefined8 *)
           FUN_18020d168(*(undefined8 *)(*(longlong *)(param_5 + 0x18) + 0x1930),auStack_58,
                         *(int *)(lVar1 + 0xdb0) + *(int *)(param_5 + 0x3c),0);
  *(undefined8 *)(param_5 + 0x30) = *puVar3;
  *(undefined8 *)(param_5 + 0x28) =
       *(undefined8 *)(lVar1 + (ulonglong)*(uint *)(param_5 + 0x3c) * 8 + 0xda0);
  *(uint *)(param_5 + 0x3c) = *(uint *)(param_5 + 0x3c) - 1 & 1;
  *(int *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + 1;
  return;
}

