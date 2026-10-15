/*
 * FUN_180023cf8 at 180023cf8
 * undefined __fastcall FUN_180023cf8(longlong * param_1, byte * param_2)
 * Address ranges: 180023cf8-180023f99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023cf8(longlong *param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1800222e0(param_1,(uint)*param_2);
  FUN_1800367c4(param_1,(uint)param_2[0x61],(uint)param_2[0x62],(uint)param_2[99],(uint)param_2[100]
                ,*(undefined4 *)(param_2 + 0x65),param_2[0x134]);
  FUN_180036830(param_1,(uint)param_2[0x69],(uint)param_2[0x6a],(uint)param_2[0x6b],
                (uint)param_2[0x6c],*(undefined4 *)(param_2 + 0x6d));
  FUN_180036468(param_1,(uint)param_2[2],(uint)param_2[3],(uint)param_2[4],(uint)param_2[5]);
  FUN_18003657c(param_1,(uint)param_2[0x24]);
  FUN_1800365ac(param_1,param_2[0x25]);
  FUN_1800365f8(param_1,*(int *)(param_2 + 0x26));
  FUN_1800366cc(param_1,*(uint *)(param_2 + 6));
  FUN_180036670(param_1,*(uint *)(param_2 + 0x1a));
  FUN_180036630(param_1,*(int *)(param_2 + 0x1e) == 1);
  FUN_180036948(param_1,(uint)param_2[0x22]);
  FUN_18003698c(param_1,(uint)param_2[0x23]);
  FUN_1800369d8(param_1,(int *)(param_2 + 0x2a));
  FUN_180036a90(param_1,*(uint *)(param_2 + 0x53));
  FUN_180036b1c(param_1,(uint)*(ushort *)(param_2 + 0x51));
  FUN_18001f7bc(param_1);
  FUN_1800368a8(param_1,*(int *)(param_2 + 0x3b) != 0,*(int *)(param_2 + 0x3f) != 0);
  FUN_180022908(param_1,(ushort)*(undefined4 *)(param_2 + 0x43));
  FUN_180022a04(param_1,(uint)param_2[0x47]);
  FUN_1800229b4(param_1,(uint)param_2[0x48]);
  FUN_180022ae4(param_1,*(int *)(param_2 + 0x49) != 0);
  FUN_180022324((longlong)param_1,param_2[0x4e]);
  FUN_180022360((longlong)param_1,*(ushort *)(param_2 + 0x4f));
  FUN_18002239c((longlong)param_1,(uint)param_2[0x4d]);
  FUN_180023cc0(param_1,(uint)param_2[0x3a]);
  uVar3 = 0;
  if (*(int *)(param_1[1] + 0x33) != 0) {
    do {
      uVar1 = (uint)uVar3;
      FUN_180035fac(param_1,uVar1,(uint)param_2[uVar3 + 0x57]);
      lVar2 = uVar3 * 0x41;
      FUN_180035e24(param_1,uVar1,(uint)param_2[lVar2 + 0x71],(uint)param_2[lVar2 + 0x72]);
      FUN_180035ec4(param_1,uVar1,(uint)param_2[lVar2 + 0x73],(uint)param_2[lVar2 + 0x74]);
      FUN_180035e78(param_1,uVar1,*(undefined4 *)(param_2 + lVar2 + 0x86));
      FUN_180035ff8(param_1,uVar1,(uint)param_2[lVar2 + 0x75],(uint)param_2[lVar2 + 0x76],
                    (uint)param_2[lVar2 + 0x77],(uint)param_2[lVar2 + 0x78],
                    *(undefined4 *)(param_2 + lVar2 + 0x79),*(undefined4 *)(param_2 + lVar2 + 0x7d))
      ;
      FUN_180036194(param_1,uVar1,(uint)param_2[lVar2 + 0x81],*(int *)(param_2 + lVar2 + 0x82));
      FUN_180036118(param_1,uVar1,(int)(char)param_2[lVar2 + 0x8a],param_2[lVar2 + 0x8b],
                    *(undefined4 *)(param_2 + lVar2 + 0x8c));
      uVar3 = (ulonglong)(uVar1 + 1);
    } while (uVar1 + 1 < *(uint *)(param_1[1] + 0x33));
  }
  uVar3 = 0;
  do {
    FUN_180036204(param_1,(uint)uVar3,(uint)param_2[uVar3 + 0x5a]);
    uVar1 = (uint)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 7);
  return;
}

