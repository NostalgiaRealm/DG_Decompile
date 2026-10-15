/*
 * FUN_180026140 at 180026140
 * undefined __cdecl FUN_180026140(longlong * param_1, byte * param_2)
 * Address ranges: 180026140-180026403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026140(longlong *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_180024488(param_1,(uint)*param_2);
  FUN_18003a988(param_1,(uint)param_2[0x61],(uint)param_2[0x62],(uint)param_2[99],(uint)param_2[100]
                ,*(undefined4 *)(param_2 + 0x65),param_2[0x134]);
  FUN_18003aa10(param_1,(uint)param_2[0x69],(uint)param_2[0x6a],(uint)param_2[0x6b],
                (uint)param_2[0x6c],*(undefined4 *)(param_2 + 0x6d));
  FUN_18003a630(param_1,(uint)param_2[2],(uint)param_2[3],(uint)param_2[4],(uint)param_2[5]);
  bVar1 = param_2[0x24];
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(uint *)(param_1 + 0x58d) = (uint)bVar1;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  FUN_18003a770(param_1,param_2[0x25]);
  FUN_18003a7c8(param_1,*(int *)(param_2 + 0x26));
  FUN_18003a8b8(param_1,*(uint *)(param_2 + 6));
  FUN_18003a858(param_1,*(uint *)(param_2 + 0x1a));
  FUN_18003a810(param_1,(uint)(*(int *)(param_2 + 0x1e) == 1));
  FUN_18003ab60(param_1,(uint)param_2[0x22]);
  FUN_18003abb0(param_1,(uint)param_2[0x23]);
  FUN_18003ac10(param_1,(int *)(param_2 + 0x2a));
  FUN_18003acf0(param_1,*(uint *)(param_2 + 0x53));
  FUN_18003ad70(param_1,(uint)*(ushort *)(param_2 + 0x51));
  FUN_180021528(param_1);
  FUN_18003aa88(param_1,*(int *)(param_2 + 0x3b) != 0,*(int *)(param_2 + 0x3f) != 0);
  FUN_180024ce0(param_1,(ushort)*(undefined4 *)(param_2 + 0x43));
  FUN_180024de0(param_1,(uint)param_2[0x47]);
  FUN_180024d88(param_1,(uint)param_2[0x48]);
  FUN_180024ed0(param_1,*(int *)(param_2 + 0x49) != 0);
  FUN_1800244e0((longlong)param_1,param_2[0x4e]);
  FUN_180024530((longlong)param_1,*(ushort *)(param_2 + 0x4f));
  FUN_180024580((longlong)param_1,(uint)param_2[0x4d]);
  FUN_180026100(param_1,(uint)param_2[0x3a]);
  uVar4 = 0;
  if (*(int *)(param_1[1] + 0x33) != 0) {
    do {
      uVar3 = (uint)uVar4;
      FUN_18003a108(param_1,uVar3,(uint)param_2[uVar4 + 0x57]);
      lVar2 = uVar4 * 0x41;
      FUN_180039d58(param_1,uVar3,(uint)param_2[lVar2 + 0x71],(uint)param_2[lVar2 + 0x72]);
      FUN_180039e20(param_1,uVar3,(uint)param_2[lVar2 + 0x73],(uint)param_2[lVar2 + 0x74]);
      FUN_180039dc8(*(undefined4 *)(param_2 + lVar2 + 0x86),param_1,uVar3);
      FUN_18003a168(param_1,uVar3,(uint)param_2[lVar2 + 0x75],(uint)param_2[lVar2 + 0x76],
                    (uint)param_2[lVar2 + 0x77],(uint)param_2[lVar2 + 0x78],
                    *(undefined4 *)(param_2 + lVar2 + 0x79),*(undefined4 *)(param_2 + lVar2 + 0x7d))
      ;
      FUN_18003a400(param_1,uVar3,(uint)param_2[lVar2 + 0x81],*(int *)(param_2 + lVar2 + 0x82));
      FUN_18003a370(*(undefined4 *)(param_2 + lVar2 + 0x8c),param_1,uVar3,
                    (int)(char)param_2[lVar2 + 0x8a],(uint)param_2[lVar2 + 0x8b]);
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < *(uint *)(param_1[1] + 0x33));
  }
  uVar4 = 0;
  do {
    FUN_18003a4c8(param_1,(uint)uVar4,(uint)param_2[uVar4 + 0x5a]);
    uVar3 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 < 7);
  return;
}

