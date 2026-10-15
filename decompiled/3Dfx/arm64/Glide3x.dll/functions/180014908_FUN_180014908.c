/*
 * FUN_180014908 at 180014908
 * undefined __cdecl FUN_180014908(longlong * param_1, byte * param_2)
 * Address ranges: 180014908-180014c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014908(longlong *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  FUN_180018220(param_1,(uint)*param_2);
  FUN_180018278(param_1,(uint)param_2[1]);
  FUN_1800150c0(param_1,(uint)param_2[0x66],(uint)param_2[0x67],(uint)param_2[0x68],
                (uint)param_2[0x69],*(undefined4 *)(param_2 + 0x6a),param_2[0x1ae]);
  FUN_180015148(param_1,(uint)param_2[0x6e],(uint)param_2[0x6f],(uint)param_2[0x70],
                (uint)param_2[0x71],*(undefined4 *)(param_2 + 0x72));
  FUN_180014d68(param_1,(uint)param_2[2],(uint)param_2[3],(uint)param_2[4],(uint)param_2[5]);
  bVar1 = param_2[0x24];
  (**(code **)(*param_1 + 0x2e0))(param_1);
  *(uint *)(param_1 + 0x5a1) = (uint)bVar1;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  FUN_180014ea8(param_1,param_2[0x25]);
  FUN_180014f00(param_1,*(int *)(param_2 + 0x26));
  FUN_180014ff0(param_1,*(uint *)(param_2 + 6));
  FUN_180014f90(param_1,*(uint *)(param_2 + 0x1a));
  FUN_180014f48(param_1,(uint)(*(int *)(param_2 + 0x1e) == 1));
  FUN_180015298(param_1,(uint)param_2[0x22]);
  FUN_1800152e8(param_1,(uint)param_2[0x23]);
  FUN_180015348(param_1,(int *)(param_2 + 0x2a));
  FUN_180015430(param_1,*(uint *)(param_2 + 0x53));
  FUN_1800154b0(param_1,(uint)*(ushort *)(param_2 + 0x51));
  FUN_18000cab0(param_1);
  FUN_1800151c0(param_1,*(int *)(param_2 + 0x3b) != 0,*(int *)(param_2 + 0x3f) != 0);
  FUN_180018d80(param_1,(ushort)*(undefined4 *)(param_2 + 0x43));
  FUN_180018e80(param_1,(uint)param_2[0x47]);
  FUN_180018e28(param_1,(uint)param_2[0x48]);
  FUN_180018f70(param_1,*(int *)(param_2 + 0x49) != 0);
  FUN_1800183c0((longlong)param_1,param_2[0x4e]);
  FUN_180018410((longlong)param_1,*(ushort *)(param_2 + 0x4f));
  FUN_180018460((longlong)param_1,(uint)param_2[0x4d]);
  FUN_180014778(param_1,(uint)param_2[0x3a]);
  uVar5 = 0;
  if (*(int *)(param_1[1] + 0x33) != 0) {
    do {
      uVar3 = (uint)uVar5;
      FUN_18002e9d0(param_1,uVar3,(uint)param_2[uVar5 + 0x57]);
      lVar2 = uVar5 * 0x55;
      FUN_18002e5a0(param_1,uVar3,(uint)param_2[lVar2 + 0xaf],(uint)param_2[lVar2 + 0xb0]);
      FUN_18002e658(param_1,uVar3,(uint)param_2[lVar2 + 0xb1],(uint)param_2[lVar2 + 0xb2]);
      FUN_18002e608(*(undefined4 *)(param_2 + lVar2 + 0xc4),param_1,uVar3);
      FUN_18002ea30(param_1,uVar3,(uint)param_2[lVar2 + 0xb3],(uint)param_2[lVar2 + 0xb4],
                    (uint)param_2[lVar2 + 0xb5],(uint)param_2[lVar2 + 0xb6],
                    *(undefined4 *)(param_2 + lVar2 + 0xb7),*(undefined4 *)(param_2 + lVar2 + 0xbb))
      ;
      FUN_18002ebf8(param_1,uVar3,(uint)param_2[lVar2 + 0xbf],*(int *)(param_2 + lVar2 + 0xc0));
      FUN_18002eb70(*(undefined4 *)(param_2 + lVar2 + 0xca),param_1,uVar3,
                    (int)(char)param_2[lVar2 + 200],(uint)param_2[lVar2 + 0xc9]);
      uVar5 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < *(uint *)(param_1[1] + 0x33));
  }
  FUN_18000d018(param_1,*(uint *)(param_2 + 0x5a),*(uint *)(param_2 + 0x5e));
  FUN_18000cfd8(param_1,*(undefined4 *)(param_2 + 0x62));
  uVar5 = 0;
  if (*(int *)(param_1[1] + 0x33) != 0) {
    do {
      lVar2 = uVar5 * 0x55;
      iVar4 = (int)uVar5;
      FUN_18000d0f0(param_1,iVar4,*(uint *)(param_2 + lVar2 + 0xce),
                    *(uint *)(param_2 + lVar2 + 0xd2));
      FUN_18000d098(param_1,iVar4,*(undefined4 *)(param_2 + lVar2 + 0xd6));
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < *(uint *)(param_1[1] + 0x33));
  }
  return;
}

