/*
 * FUN_1009dc68 at 1009dc68
 * undefined4 __stdcall FUN_1009dc68(int param_1, undefined4 * param_2)
 * Address ranges: 1009dc68-1009ddc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009dc68(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  LARGE_INTEGER local_c;
  
  iVar1 = param_1;
  uVar6 = 0x8876086c;
  if (param_2 == (undefined4 *)0x0) {
    return 0x8876086c;
  }
  FUN_10003e40((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + 0x34) + 0xdd0) >> 2) & 1);
  local_c.s.HighPart = (&DAT_100df2e8)[*(int *)(iVar1 + 0xac) * 0x8a];
  iVar4 = (**(code **)(*(int *)local_c.s.HighPart + 0x98))();
  puVar2 = param_2;
  if (iVar4 == 0) {
    puVar7 = param_2;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    if ((*(char *)(iVar1 + 0xbd) == '\0') &&
       (FUN_10009d44(*(void **)(iVar1 + 0x120),&local_1c), (local_10 & 0x4000) != 0)) {
      (**(code **)(*(int *)local_c.s.HighPart + 0xa4))
                (&local_1c,(&DAT_100df2fc)[*(int *)(iVar1 + 0xac) * 0x8a]);
      QueryPerformanceCounter(&local_c);
      uVar3 = local_c.s.HighPart;
      uVar6 = *(undefined4 *)(iVar1 + 0xcc);
      uVar5 = *(uint *)(iVar1 + 200);
      if (((int)uVar6 < (int)local_10) ||
         (((int)uVar6 <= (int)local_10 && ((uint)uVar5 <= local_14)))) {
        uVar5 = local_c.s.LowPart;
        uVar6 = local_c.s.HighPart;
      }
      *puVar2 = *(undefined4 *)(iVar1 + 0xd0);
      uVar8 = __alldiv(uVar5,uVar6,local_1c,local_18);
      puVar2[1] = (int)uVar8;
      uVar8 = __alldiv(local_c.s.LowPart - local_14,
                       (uVar3 - local_10) - (uint)(local_c.s.LowPart < local_14),local_1c,local_18);
      puVar2[2] = (int)uVar8;
      uVar6 = *(undefined4 *)(iVar1 + 0xcc);
      puVar2[3] = *(undefined4 *)(iVar1 + 200);
      puVar2[4] = uVar6;
    }
    uVar6 = 0;
    goto LAB_1009ddb6;
  }
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      uVar6 = 0x88760870;
      goto LAB_1009ddb6;
    }
    if (iVar4 == 3) {
      uVar6 = 0x88760868;
      goto LAB_1009ddb6;
    }
    if (iVar4 != 4) goto LAB_1009ddb6;
  }
  uVar6 = 0x88760874;
LAB_1009ddb6:
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar6;
}

