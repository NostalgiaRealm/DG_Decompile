/*
 * FUN_10131a20 at 10131a20
 * undefined FUN_10131a20(void)
 * Address ranges: 10131a20-10131b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10131a20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 local_40 [4];
  
  iVar7 = FUN_10132550(param_2,&DAT_1015e3c0,0x10);
  local_40[0] = param_3;
  if (iVar7 == 0) {
    uVar6 = FUN_10024e68(param_1 + 0x18,local_40);
  }
  else {
    iVar7 = FUN_10132550(param_2,&DAT_1015e3d0,0x10);
    if (iVar7 == 0) {
      uVar6 = FUN_10024e68(param_1 + 0x24,local_40);
    }
    else {
      iVar7 = FUN_10132550(param_2,&DAT_1015e3e0,0x10);
      if (iVar7 == 0) {
        piVar1 = (int *)(param_1 + 0x30);
        puVar2 = (uint *)(param_1 + 0x38);
        puVar3 = (uint *)(param_1 + 0x34);
        uVar4 = *puVar2;
        if (*puVar3 == uVar4) {
          uVar5 = uVar4 << 1;
          if (uVar4 == 0) {
            uVar5 = 0x10;
          }
          iVar7 = uVar5 * 4;
          if (uVar5 >> 0x1e != 0) {
            iVar7 = -1;
          }
          iVar7 = FUN_101322b0(iVar7);
          if (iVar7 == 0) {
            return 0;
          }
          FUN_101325a0(iVar7,*piVar1,*puVar2 << 2);
          FUN_101322d0(*piVar1);
          *piVar1 = iVar7;
          *puVar2 = uVar5;
        }
        uVar6 = 1;
        *(undefined4 *)(*piVar1 + *puVar3 * 4) = param_3;
        *puVar3 = *puVar3 + 1;
      }
      else {
        iVar7 = FUN_10132550(param_2,&DAT_1015e3f0,0x10);
        if (iVar7 == 0) {
          uVar6 = FUN_10024e68(param_1 + 0x3c,local_40);
        }
        else {
          uVar6 = 0;
        }
      }
    }
  }
  return uVar6;
}

