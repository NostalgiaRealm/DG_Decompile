/*
 * FUN_1800252f0 at 1800252f0
 * undefined __cdecl FUN_1800252f0(longlong * param_1, byte * param_2)
 * Address ranges: 1800252f0-1800255b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800252f0(longlong *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  FUN_180023638(param_1,(uint)*param_2);
  FUN_180039b38(param_1,(uint)param_2[0x61],(uint)param_2[0x62],(uint)param_2[99],(uint)param_2[100]
                ,*(undefined4 *)(param_2 + 0x65),param_2[0x134]);
  FUN_180039bc0(param_1,(uint)param_2[0x69],(uint)param_2[0x6a],(uint)param_2[0x6b],
                (uint)param_2[0x6c],*(undefined4 *)(param_2 + 0x6d));
  FUN_1800397e0(param_1,(uint)param_2[2],(uint)param_2[3],(uint)param_2[4],(uint)param_2[5]);
  bVar1 = param_2[0x24];
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(uint *)(param_1 + 0x58d) = (uint)bVar1;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  FUN_180039920(param_1,param_2[0x25]);
  FUN_180039978(param_1,*(int *)(param_2 + 0x26));
  FUN_180039a68(param_1,*(uint *)(param_2 + 6));
  FUN_180039a08(param_1,*(uint *)(param_2 + 0x1a));
  FUN_1800399c0(param_1,(uint)(*(int *)(param_2 + 0x1e) == 1));
  FUN_180039d10(param_1,(uint)param_2[0x22]);
  FUN_180039d60(param_1,(uint)param_2[0x23]);
  FUN_180039dc0(param_1,(int *)(param_2 + 0x2a));
  FUN_180039ea0(param_1,*(uint *)(param_2 + 0x53));
  FUN_180039f20(param_1,(uint)*(ushort *)(param_2 + 0x51));
  FUN_1800206d8(param_1);
  FUN_180039c38(param_1,*(int *)(param_2 + 0x3b) != 0,*(int *)(param_2 + 0x3f) != 0);
  FUN_180023e90(param_1,(ushort)*(undefined4 *)(param_2 + 0x43));
  FUN_180023f90(param_1,(uint)param_2[0x47]);
  FUN_180023f38(param_1,(uint)param_2[0x48]);
  FUN_180024080(param_1,*(int *)(param_2 + 0x49) != 0);
  FUN_180023690((longlong)param_1,param_2[0x4e]);
  FUN_1800236e0((longlong)param_1,*(ushort *)(param_2 + 0x4f));
  FUN_180023730((longlong)param_1,(uint)param_2[0x4d]);
  FUN_1800252b0(param_1,(uint)param_2[0x3a]);
  uVar4 = 0;
  if (*(int *)(param_1[1] + 0x33) != 0) {
    do {
      uVar3 = (uint)uVar4;
      FUN_1800392b8(param_1,uVar3,(uint)param_2[uVar4 + 0x57]);
      lVar2 = uVar4 * 0x41;
      FUN_180038f08(param_1,uVar3,(uint)param_2[lVar2 + 0x71],(uint)param_2[lVar2 + 0x72]);
      FUN_180038fd0(param_1,uVar3,(uint)param_2[lVar2 + 0x73],(uint)param_2[lVar2 + 0x74]);
      FUN_180038f78(*(undefined4 *)(param_2 + lVar2 + 0x86),param_1,uVar3);
      FUN_180039318(param_1,uVar3,(uint)param_2[lVar2 + 0x75],(uint)param_2[lVar2 + 0x76],
                    (uint)param_2[lVar2 + 0x77],(uint)param_2[lVar2 + 0x78],
                    *(undefined4 *)(param_2 + lVar2 + 0x79),*(undefined4 *)(param_2 + lVar2 + 0x7d))
      ;
      FUN_1800395b0(param_1,uVar3,(uint)param_2[lVar2 + 0x81],*(int *)(param_2 + lVar2 + 0x82));
      FUN_180039520(*(undefined4 *)(param_2 + lVar2 + 0x8c),param_1,uVar3,
                    (int)(char)param_2[lVar2 + 0x8a],(uint)param_2[lVar2 + 0x8b]);
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < *(uint *)(param_1[1] + 0x33));
  }
  uVar4 = 0;
  do {
    FUN_180039678(param_1,(uint)uVar4,(uint)param_2[uVar4 + 0x5a]);
    uVar3 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 < 7);
  return;
}

