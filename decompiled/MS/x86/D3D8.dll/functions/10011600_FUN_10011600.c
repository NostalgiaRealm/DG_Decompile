/*
 * FUN_10011600 at 10011600
 * undefined1 __fastcall FUN_10011600(int * param_1)
 * Address ranges: 10011600-10011773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10011600(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  undefined1 local_5;
  
  local_5 = 0;
  piVar6 = param_1 + 0x25;
  local_14 = piVar6;
  if (param_1[0x2c] != 3) {
    iVar2 = (**(code **)(*(int *)param_1[0x24] + 0x90))
                      (param_1[0x26],param_1[0x27],param_1[0x28],param_1[0x2b],(short)param_1[0xc],
                       param_1[0x2c] == 2);
    *piVar6 = iVar2;
  }
  if ((*piVar6 != 0) || (param_1[0x2c] == 3)) {
    if (((param_1[0x29] & 0x200U) != 0) || (uVar3 = 0, param_1[0x2c] != 0)) {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x2e) = uVar3;
    if (((param_1[0x29] & 0x200U) != 0) || (local_10 = local_10 & 0xffffff00, param_1[0x2c] != 0)) {
      local_10 = CONCAT31(local_10._1_3_,1);
    }
    local_c = 0;
    uVar5 = 0;
    if ((short)param_1[0xc] != 0) {
      do {
        bVar4 = (byte)local_c;
        local_20 = (uint)param_1[0x26] >> (bVar4 & 0x1f);
        local_1c = (uint)param_1[0x27] >> (bVar4 & 0x1f);
        local_18 = (uint)param_1[0x28] >> (bVar4 & 0x1f);
        uVar5 = 1;
        if (local_20 == 0) {
          local_20 = uVar5;
        }
        local_24 = 0;
        if (local_1c == 0) {
          local_1c = uVar5;
        }
        if (local_18 == 0) {
          local_18 = uVar5;
        }
        local_34 = param_1[0x2a];
        local_30 = param_1[6];
        local_2c = param_1[0x29];
        local_28 = param_1[0x2c];
        cVar1 = (**(code **)(*param_1 + 0x14))(local_c,&local_34,local_10);
        uVar5 = local_c;
        piVar6 = local_14;
      } while ((cVar1 != '\0') &&
              (uVar5 = local_c + 1, local_c = uVar5, uVar5 < *(ushort *)(param_1 + 0xc)));
    }
    local_5 = uVar5 == *(ushort *)(param_1 + 0xc);
    if (!(bool)local_5) {
      for (local_c = uVar5 + 1; local_c != 0; local_c = local_c + -1) {
        (**(code **)(*param_1 + 0x18))(local_c);
      }
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
      }
      *piVar6 = 0;
    }
  }
  return local_5;
}

