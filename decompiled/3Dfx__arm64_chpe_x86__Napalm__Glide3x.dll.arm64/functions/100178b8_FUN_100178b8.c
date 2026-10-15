/*
 * FUN_100178b8 at 100178b8
 * undefined FUN_100178b8(void)
 * Address ranges: 100178b8-10017ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100178b8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined4 *)(param_1 + 0x2c24);
  puVar2 = (undefined4 *)(param_1 + 0x2d14);
  puVar3 = (undefined4 *)(param_1 + 0x2ddc);
  if ((*(uint *)(param_1 + 0x2d0c) >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2c2c) = 1;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x2e54) = 1;
      *(undefined4 *)(param_1 + 0x2c4c) = 3;
      *(undefined4 *)(param_1 + 0x2c3c) = 3;
      *(undefined4 *)(param_1 + 0x2c54) = 1;
      *(undefined2 *)(param_1 + 0x2c30) = 0xffff;
      *(undefined4 *)(param_1 + 0x2c48) = 2;
      *(undefined4 *)(param_1 + 0x2c38) = 2;
      *(undefined4 *)(param_1 + 0x2c50) = 8;
      *(undefined4 *)(param_1 + 0x2c40) = 8;
      *(undefined4 *)(param_1 + 0x2c28) =
           *(undefined4 *)(&DAT_100a0170 + *(int *)(param_1 + 0x2d3c) * 4);
      *(undefined4 *)(param_1 + 0x2d10) = *puVar3;
      *(undefined4 *)(param_1 + 0x2d18) = *(undefined4 *)(param_1 + 0x2de8);
      *puVar2 = *puVar1;
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x2de8) = 0;
      *(uint *)(param_1 + 0x2d1c) = (uint)*(byte *)(param_1 + 0x2c7c);
      *(undefined1 *)(param_1 + 0x2c7c) = 0;
      *puVar3 = 0xff0004;
      *(undefined1 *)(param_1 + 0x3650) = 1;
      *(undefined1 *)(param_1 + 0x2da8) = 1;
      *(undefined1 *)(param_1 + 0x2da9) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x2c4c) = 1;
    *(undefined4 *)(param_1 + 0x2c28) = 8;
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 0x2c48) = 1;
    *(undefined4 *)(param_1 + 0x2e54) = 0;
    *(undefined4 *)(param_1 + 0x2c50) = 3;
    *puVar1 = *puVar2;
    *(undefined4 *)(param_1 + 0x2c3c) = 1;
    *(undefined4 *)(param_1 + 0x2c40) = 3;
    *(undefined4 *)(param_1 + 0x2c38) = 1;
    *(undefined1 *)(param_1 + 0x2c7c) = *(undefined1 *)(param_1 + 0x2d1c);
    *(undefined1 *)(param_1 + 0x3650) = 1;
    *(undefined1 *)(param_1 + 0x2da8) = 1;
    *(undefined1 *)(param_1 + 0x2da9) = 1;
    *puVar3 = *(undefined4 *)(param_1 + 0x2d10);
    *(undefined4 *)(param_1 + 0x2de8) = *(undefined4 *)(param_1 + 0x2d18);
  }
  puVar4 = (undefined4 *)(param_1 + 0x2de8);
  uVar7 = 0;
  if ((*(uint *)(param_1 + 0x2d0c) & 1) != 0) {
    if (param_2 == 0) {
      iVar5 = *(int *)(param_1 + 0x2e4c);
      if ((iVar5 != 0) && (*(int *)(param_1 + 0x2c60) != 0)) {
        *(int *)(param_1 + 0x2d10) = iVar5;
        *(int *)(param_1 + 0x2e4c) = 0;
        uVar7 = 1;
        *(undefined4 *)(param_1 + 0x2d14) = *(undefined4 *)(param_1 + 0x2c6c);
        *(undefined4 *)(param_1 + 0x2d18) = *(undefined4 *)(param_1 + 0x2c78);
        *(undefined4 *)(param_1 + 0x2d1c) = *(undefined4 *)(param_1 + 0x2c64);
        *(undefined4 *)(param_1 + 0x2d20) = *(undefined4 *)(param_1 + 0x2c70);
        *(undefined4 *)(param_1 + 0x2d24) = *(undefined4 *)(param_1 + 0x2c74);
        *(undefined8 *)(param_1 + 0x2c6c) = 0x100000001;
        *(undefined8 *)(param_1 + 0x2c64) = 0x300000001;
        *(undefined8 *)(param_1 + 0x2c74) = 0x100000002;
        *(undefined4 *)(param_1 + 0x2d28) = *(undefined4 *)(param_1 + 0x2ddc);
        *(undefined4 *)(param_1 + 0x2ddc) = 0xff0004;
        uVar6 = *puVar1;
        *puVar1 = 0;
        *(undefined4 *)(param_1 + 0x2d2c) = uVar6;
        uVar6 = *puVar4;
        *puVar4 = 0;
        *(undefined4 *)(param_1 + 0x2d30) = uVar6;
      }
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      *(int *)(param_1 + 0x2e4c) = *(int *)(param_1 + 0x2d10);
      *(undefined4 *)(param_1 + 0x2c6c) = *puVar2;
      *(undefined4 *)(param_1 + 0x2c78) = *(undefined4 *)(param_1 + 0x2d18);
      *(undefined4 *)(param_1 + 0x2c64) = *(undefined4 *)(param_1 + 0x2d1c);
      *(undefined4 *)(param_1 + 0x2c68) = 2;
      *(undefined4 *)(param_1 + 0x2c70) = *(undefined4 *)(param_1 + 0x2d20);
      *(undefined4 *)(param_1 + 0x2c74) = *(undefined4 *)(param_1 + 0x2d24);
      *puVar1 = *(undefined4 *)(param_1 + 0x2d2c);
      *puVar4 = *(undefined4 *)(param_1 + 0x2d30);
      *puVar3 = *(undefined4 *)(param_1 + 0x2d28);
    }
    *(undefined1 *)(param_1 + 0x2da9) = 1;
    *(undefined1 *)(param_1 + 0x2da8) = 1;
    *(undefined1 *)(param_1 + 0x3650) = 1;
  }
  return uVar7;
}

