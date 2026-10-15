/*
 * FUN_10031ba7 at 10031ba7
 * undefined4 __fastcall FUN_10031ba7(void * param_1, uint param_2, int param_3)
 * Address ranges: 10031ba7-10031c47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10031ba7(void *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_34 [8];
  void *local_14;
  byte *local_10;
  uint local_c;
  
  iVar4 = 0;
  uVar3 = 0xffffffff;
  if (*(&PTR_DAT_1006b5c4)[*(int *)((int)param_1 + 0x40) * 0x6a] != -1) {
    do {
      local_10 = (&PTR_DAT_1006b5c4)[*(int *)((int)param_1 + 0x40) * 0x6a] + iVar4;
      uVar2 = 0;
      local_c = (uint)*local_10;
      do {
        if (((&DAT_10064780)[uVar2] == local_c) &&
           ((param_2 == 0 || (param_2 == (byte)(&DAT_10064778)[uVar2])))) break;
        uVar2 = uVar2 + 1;
      } while (uVar2 < 6);
      if (uVar3 <= uVar2) {
        uVar2 = uVar3;
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar2;
    } while (local_10[1] != 0xff);
    if (uVar2 < 6) {
      local_14 = param_1;
      puVar1 = FUN_10024c76(param_1,local_34,(&DAT_10064780)[uVar2]);
      puVar5 = (undefined4 *)(param_3 + 0x48);
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_3 + 0x48) != 0) {
        return (&DAT_10064780)[uVar2];
      }
    }
  }
  return 0xffffffff;
}

