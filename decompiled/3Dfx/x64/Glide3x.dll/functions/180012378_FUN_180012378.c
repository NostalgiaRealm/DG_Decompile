/*
 * FUN_180012378 at 180012378
 * undefined __fastcall FUN_180012378(longlong * param_1, byte * param_2)
 * Address ranges: 180012378-18001268c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012378(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  FUN_180015858(param_1,(uint)*param_2);
  FUN_18001589c(param_1,(uint)param_2[1]);
  FUN_180012c58(param_1,(uint)param_2[0x66],(uint)param_2[0x67],(uint)param_2[0x68],
                (uint)param_2[0x69],*(undefined4 *)(param_2 + 0x6a),param_2[0x1ae]);
  FUN_180012cc4(param_1,(uint)param_2[0x6e],(uint)param_2[0x6f],(uint)param_2[0x70],
                (uint)param_2[0x71],*(undefined4 *)(param_2 + 0x72));
  FUN_1800128fc(param_1,(uint)param_2[2],(uint)param_2[3],(uint)param_2[4],(uint)param_2[5]);
  FUN_180012a10(param_1,(uint)param_2[0x24]);
  FUN_180012a40(param_1,param_2[0x25]);
  FUN_180012a8c(param_1,*(int *)(param_2 + 0x26));
  FUN_180012b60(param_1,*(uint *)(param_2 + 6));
  FUN_180012b04(param_1,*(uint *)(param_2 + 0x1a));
  FUN_180012ac4(param_1,*(int *)(param_2 + 0x1e) == 1);
  FUN_180012ddc(param_1,(uint)param_2[0x22]);
  FUN_180012e20(param_1,(uint)param_2[0x23]);
  FUN_180012e6c(param_1,(int *)(param_2 + 0x2a));
  FUN_180012f1c(param_1,*(uint *)(param_2 + 0x53));
  FUN_180012fa8(param_1,(uint)*(ushort *)(param_2 + 0x51));
  FUN_18000a624(param_1);
  FUN_180012d3c(param_1,*(int *)(param_2 + 0x3b) != 0,*(int *)(param_2 + 0x3f) != 0);
  FUN_1800160e4(param_1,(ushort)*(undefined4 *)(param_2 + 0x43));
  FUN_1800161e0(param_1,(uint)param_2[0x47]);
  FUN_180016190(param_1,(uint)param_2[0x48]);
  FUN_1800162c0(param_1,*(int *)(param_2 + 0x49) != 0);
  FUN_1800159c0((longlong)param_1,param_2[0x4e]);
  FUN_1800159fc((longlong)param_1,*(ushort *)(param_2 + 0x4f));
  FUN_180015a38((longlong)param_1,(uint)param_2[0x4d]);
  FUN_180012314(param_1,(uint)param_2[0x3a]);
  uVar3 = 0;
  if (*(int *)(param_1[1] + 0x33) != 0) {
    do {
      uVar2 = (uint)uVar3;
      FUN_180028cd0(param_1,uVar2,(uint)param_2[uVar3 + 0x57]);
      lVar1 = uVar3 * 0x55;
      FUN_180028b54(param_1,uVar2,(uint)param_2[lVar1 + 0xaf],(uint)param_2[lVar1 + 0xb0]);
      FUN_180028bf0(param_1,uVar2,(uint)param_2[lVar1 + 0xb1],(uint)param_2[lVar1 + 0xb2]);
      FUN_180028ba8(param_1,uVar2,*(undefined4 *)(param_2 + lVar1 + 0xc4));
      FUN_180028d1c(param_1,uVar2,(uint)param_2[lVar1 + 0xb3],(uint)param_2[lVar1 + 0xb4],
                    (uint)param_2[lVar1 + 0xb5],(uint)param_2[lVar1 + 0xb6],
                    *(undefined4 *)(param_2 + lVar1 + 0xb7),*(undefined4 *)(param_2 + lVar1 + 0xbb))
      ;
      FUN_180028e94(param_1,uVar2,(uint)param_2[lVar1 + 0xbf],*(int *)(param_2 + lVar1 + 0xc0));
      FUN_180028e18(param_1,uVar2,(int)(char)param_2[lVar1 + 200],param_2[lVar1 + 0xc9],
                    *(undefined4 *)(param_2 + lVar1 + 0xca));
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < *(uint *)(param_1[1] + 0x33));
  }
  FUN_18000a864(param_1,*(uint *)(param_2 + 0x5a),*(uint *)(param_2 + 0x5e));
  FUN_18000a82c(param_1,*(undefined4 *)(param_2 + 0x62));
  uVar2 = 0;
  if (*(int *)(param_1[1] + 0x33) != 0) {
    do {
      lVar1 = (ulonglong)uVar2 * 0x55;
      FUN_18000a940(param_1,uVar2,*(uint *)(param_2 + lVar1 + 0xce),
                    *(uint *)(param_2 + lVar1 + 0xd2));
      FUN_18000a8f0(param_1,uVar2,*(undefined4 *)(param_2 + lVar1 + 0xd6));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1[1] + 0x33));
  }
  return;
}

