/*
 * FUN_1800ed5c4 at 1800ed5c4
 * undefined __fastcall FUN_1800ed5c4(int * param_1, longlong * param_2, uint param_3, undefined8 param_4, uint param_5)
 * Address ranges: 1800ed5c4-1800ed6f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ed5c4(int *param_1,longlong *param_2,uint param_3,undefined8 param_4,uint param_5)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  uint local_res8 [8];
  uint local_38 [6];
  
  uVar4 = param_3;
  uVar3 = FUN_1800ee040(*param_1);
  iVar2 = (int)uVar3;
  if (((iVar2 == 0x40) || (iVar2 == 0x41)) || (iVar2 == 0x50)) {
    uVar4 = 0;
    bVar5 = param_3 != 0;
    if (bVar5) {
      for (; (param_3 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    local_res8[0] = param_3;
    while (bVar5) {
      local_38[0] = param_5;
      pbVar1 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar4 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
      FUN_1800eddec(param_2,3,
                    (ulonglong)
                    (-(uint)((*(byte *)((longlong)local_38 + ((longlong)(int)(uVar4 & 0xff) >> 3))
                              >> (uVar4 & 7) & 1) != 0) & 0x800 | 0x300005a),0x106000);
      uVar4 = 0;
      bVar5 = local_res8[0] != 0;
      if (bVar5) {
        for (; (local_res8[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    }
  }
  else if (iVar2 == 0x51) {
    if ((uVar4 & ~param_5) != 0) {
      FUN_1800eddec(param_2,6,0x600005a,0x306000);
    }
    if ((param_5 & param_3) != 0) {
      FUN_1800eddec(param_2,6,0x600085a,0x306000);
    }
  }
  return;
}

