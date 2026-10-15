/*
 * FUN_180053d60 at 180053d60
 * undefined __cdecl FUN_180053d60(longlong param_1, undefined8 * param_2, ulonglong param_3, ulonglong param_4, longlong param_5)
 * Address ranges: 180053d60-180053f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180053d60(longlong param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lStack_60;
  longlong alStack_58 [2];
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
  lVar2 = *(longlong *)(param_5 + 0x20);
  alStack_58[1] = 0;
  local_2c = 0x3f800000;
  FUN_18004c070(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x1508),1,(longlong)&local_40);
  FUN_18004bfa0(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x1508),1,(longlong)(alStack_58 + 1));
  plVar3 = *(longlong **)(param_1 + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x20 + 0x6d0);
  (**(code **)(*plVar3 + 0xc0))
            (plVar3,1,*(longlong *)(*(longlong *)(param_5 + 8) + 8) +
                      (ulonglong)
                      (uint)((*(int *)(param_5 + 0x40) + *(int *)(param_5 + 0x38)) *
                            *(int *)(*(longlong *)(param_5 + 8) + 0x18)),
             *(undefined8 *)(param_5 + 0x30),0);
  FUN_18004b880(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x1508),1,
                **(longlong **)(param_5 + 8) +
                (ulonglong)
                (uint)((*(int *)(param_5 + 0x40) + *(int *)(param_5 + 0x38)) *
                      (int)(*(longlong **)(param_5 + 8))[3]));
  FUN_18004a3f8(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x1938),&lStack_60,
                *(uint *)(lVar2 + 0xdb4),*(int *)(param_5 + 0x3c));
  FUN_18004bd88(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x1508),1,&lStack_60,0,(longlong *)0x0
               );
  uVar8 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_5 + 0x10) + 8) +
           (((ulonglong)*(uint *)(param_5 + 0x40) & 0x3fffffff) * 4 + 0xc) * 0x10);
  puVar1[1] = param_2[1];
  *puVar1 = uVar8;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  uVar8 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar8;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  FUN_18004b098(*(ulonglong *)(*(longlong *)(param_5 + 0x18) + 0x1508),
                *(ulonglong *)(lVar2 + (ulonglong)*(uint *)(param_5 + 0x3c) * 8 + 0xda0),0,0,4);
  FUN_18004b098(*(ulonglong *)(*(longlong *)(param_5 + 0x18) + 0x1508),
                *(ulonglong *)(param_5 + 0x28),0,0,0x80);
  FUN_18004c430(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x1508),4,1,
                *(int *)(param_5 + 0x40) * 4 + 0xc,0);
  plVar3 = FUN_18004a3f8(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x1930),alStack_58,
                         *(int *)(lVar2 + 0xdb0) + *(int *)(param_5 + 0x3c),0);
  *(longlong *)(param_5 + 0x30) = *plVar3;
  *(undefined8 *)(param_5 + 0x28) =
       *(undefined8 *)(lVar2 + (ulonglong)*(uint *)(param_5 + 0x3c) * 8 + 0xda0);
  *(uint *)(param_5 + 0x3c) = *(uint *)(param_5 + 0x3c) - 1 & 1;
  *(int *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + 1;
  return;
}

