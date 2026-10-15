/*
 * FUN_180023850 at 180023850
 * undefined __fastcall FUN_180023850(longlong * param_1, byte * param_2)
 * Address ranges: 180023850-180023af1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023850(longlong *param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_180021e38(param_1,(uint)*param_2);
  FUN_18003631c(param_1,(uint)param_2[0x61],(uint)param_2[0x62],(uint)param_2[99],(uint)param_2[100]
                ,*(undefined4 *)(param_2 + 0x65),param_2[0x134]);
  FUN_180036388(param_1,(uint)param_2[0x69],(uint)param_2[0x6a],(uint)param_2[0x6b],
                (uint)param_2[0x6c],*(undefined4 *)(param_2 + 0x6d));
  FUN_180035fc0(param_1,(uint)param_2[2],(uint)param_2[3],(uint)param_2[4],(uint)param_2[5]);
  FUN_1800360d4(param_1,(uint)param_2[0x24]);
  FUN_180036104(param_1,param_2[0x25]);
  FUN_180036150(param_1,*(int *)(param_2 + 0x26));
  FUN_180036224(param_1,*(uint *)(param_2 + 6));
  FUN_1800361c8(param_1,*(uint *)(param_2 + 0x1a));
  FUN_180036188(param_1,*(int *)(param_2 + 0x1e) == 1);
  FUN_1800364a0(param_1,(uint)param_2[0x22]);
  FUN_1800364e4(param_1,(uint)param_2[0x23]);
  FUN_180036530(param_1,(int *)(param_2 + 0x2a));
  FUN_1800365e8(param_1,*(uint *)(param_2 + 0x53));
  FUN_180036674(param_1,(uint)*(ushort *)(param_2 + 0x51));
  FUN_18001f314(param_1);
  FUN_180036400(param_1,*(int *)(param_2 + 0x3b) != 0,*(int *)(param_2 + 0x3f) != 0);
  FUN_180022460(param_1,(ushort)*(undefined4 *)(param_2 + 0x43));
  FUN_18002255c(param_1,(uint)param_2[0x47]);
  FUN_18002250c(param_1,(uint)param_2[0x48]);
  FUN_18002263c(param_1,*(int *)(param_2 + 0x49) != 0);
  FUN_180021e7c((longlong)param_1,param_2[0x4e]);
  FUN_180021eb8((longlong)param_1,*(ushort *)(param_2 + 0x4f));
  FUN_180021ef4((longlong)param_1,(uint)param_2[0x4d]);
  FUN_180023818(param_1,(uint)param_2[0x3a]);
  uVar3 = 0;
  if (*(int *)(param_1[1] + 0x33) != 0) {
    do {
      uVar1 = (uint)uVar3;
      FUN_180035b04(param_1,uVar1,(uint)param_2[uVar3 + 0x57]);
      lVar2 = uVar3 * 0x41;
      FUN_18003597c(param_1,uVar1,(uint)param_2[lVar2 + 0x71],(uint)param_2[lVar2 + 0x72]);
      FUN_180035a1c(param_1,uVar1,(uint)param_2[lVar2 + 0x73],(uint)param_2[lVar2 + 0x74]);
      FUN_1800359d0(param_1,uVar1,*(undefined4 *)(param_2 + lVar2 + 0x86));
      FUN_180035b50(param_1,uVar1,(uint)param_2[lVar2 + 0x75],(uint)param_2[lVar2 + 0x76],
                    (uint)param_2[lVar2 + 0x77],(uint)param_2[lVar2 + 0x78],
                    *(undefined4 *)(param_2 + lVar2 + 0x79),*(undefined4 *)(param_2 + lVar2 + 0x7d))
      ;
      FUN_180035cec(param_1,uVar1,(uint)param_2[lVar2 + 0x81],*(int *)(param_2 + lVar2 + 0x82));
      FUN_180035c70(param_1,uVar1,(int)(char)param_2[lVar2 + 0x8a],param_2[lVar2 + 0x8b],
                    *(undefined4 *)(param_2 + lVar2 + 0x8c));
      uVar3 = (ulonglong)(uVar1 + 1);
    } while (uVar1 + 1 < *(uint *)(param_1[1] + 0x33));
  }
  uVar3 = 0;
  do {
    FUN_180035d5c(param_1,(uint)uVar3,(uint)param_2[uVar3 + 0x5a]);
    uVar1 = (uint)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 7);
  return;
}

