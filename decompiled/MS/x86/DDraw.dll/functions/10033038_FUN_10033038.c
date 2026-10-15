/*
 * FUN_10033038 at 10033038
 * int __fastcall FUN_10033038(int param_1)
 * Address ranges: 10033038-10033227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10033038(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint extraout_EDX;
  uint uVar6;
  int iVar7;
  ulonglong local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  uint local_10;
  int local_c;
  
  iVar7 = 0;
  if ((*(char *)(param_1 + 8) != '\0') &&
     ((iVar7 = -0x7789fdb4, (*(byte *)(param_1 + 0x1b8) & 8) == 0 ||
      (*(int *)(param_1 + 0x10c) == 0)))) {
    iVar7 = -0x7789ff1f;
    cVar1 = FUN_10024bc6(*(int *)(param_1 + 0xfc));
    if (cVar1 != '\0') {
      uVar3 = *(uint *)(param_1 + 0x1b8);
      uVar6 = uVar3 >> 0xc;
      local_10 = uVar3 >> 9 & 0xffffff01;
      if (((char)local_10 == '\0') ||
         (uVar2 = FUN_10024c50(*(int *)(param_1 + 0xfc)), uVar3 = extraout_EDX, (char)uVar2 != '\0')
         ) {
        local_2c = (ulonglong)
                   CONCAT24((short)((uint)*(undefined4 *)(param_1 + 0x148) >> 0x10),
                            *(undefined4 *)(param_1 + 0x148)) & 0xffffffff0000ffff;
        local_18 = (ulonglong)
                   CONCAT24((short)((uint)*(undefined4 *)(param_1 + 0x14c) >> 0x10),
                            *(undefined4 *)(param_1 + 0x14c)) & 0xffffffff0000ffff;
        local_24 = 0;
        local_20 = 0;
        iVar7 = (-(uint)((uVar3 & 0x200) != 0) & 0xfffffe14) + 0x8876024b;
        local_1c = 0;
        local_c = *(int *)(*(int *)(param_1 + 0xfc) + 0x11c);
        uVar3 = FUN_100030bf(local_c,(uint *)&local_2c);
        if (((char)uVar3 != '\0') || ((uVar6 & 1) != 0)) {
          iVar7 = *(int *)(&DAT_1006c484 + local_c * 0x228);
          iVar5 = param_1;
          do {
            if ((iVar5 != param_1) && ((*(byte *)(iVar5 + 0x1b8) & 8) == 0)) break;
            *(undefined1 *)(iVar5 + 8) = 0;
            if ((char)local_10 != '\0') {
              if (iVar7 != 0) {
                *(int *)(iVar7 + 0xcc) = *(int *)(iVar7 + 0xcc) + 1;
                FUN_10005fcf(*(undefined4 **)(param_1 + 4));
                *(int *)(param_1 + 4) = iVar7;
              }
              *(undefined4 *)(&DAT_1006c484 + *(int *)(*(int *)(param_1 + 0xfc) + 0x11c) * 0x228) =
                   *(undefined4 *)(param_1 + 4);
            }
            if (*(int *)(iVar5 + 0x118) != 0) {
              *(undefined1 *)(*(int *)(iVar5 + 0x118) + 8) = 0;
            }
            iVar5 = *(int *)(iVar5 + 0x110);
          } while (iVar5 != 0);
          uVar3 = 0;
          do {
            for (iVar7 = *(int *)(param_1 + 0x120 + uVar3 * 4); iVar7 != 0;
                iVar7 = *(int *)(iVar7 + 0x110)) {
              *(undefined1 *)(iVar7 + 8) = 0;
              if (*(int *)(iVar7 + 0x118) != 0) {
                *(undefined1 *)(*(int *)(iVar7 + 0x118) + 8) = 0;
              }
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 5);
          iVar7 = 0;
        }
      }
    }
  }
  if (((*(uint *)(param_1 + 0x1bc) & 0x20010) != 0) && ((*(uint *)(param_1 + 0x1b8) & 0x1000) != 0))
  {
    iVar4 = FUN_1002b7cf(param_1);
    for (iVar5 = iVar4; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x110)) {
      *(undefined4 *)(*(int *)(iVar5 + 4) + 0xc0) = 0;
    }
    uVar3 = 0;
    do {
      for (iVar5 = *(int *)(iVar4 + 0x120 + uVar3 * 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x110))
      {
        *(undefined4 *)(*(int *)(iVar5 + 4) + 0xc0) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 5);
  }
  return iVar7;
}

