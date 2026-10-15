/*
 * FUN_1011b630 at 1011b630
 * undefined FUN_1011b630(void)
 * Address ranges: 1011b630-1011b6bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1011b630(int *param_1,uint param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_1 + 1);
  uVar4 = *puVar1;
  if (param_2 < uVar4) {
    param_2 = param_2 + 1;
    if (param_2 < uVar4) {
      do {
        puVar2 = (undefined8 *)(*param_1 + param_2 * 0x74);
        param_2 = param_2 + 1;
        *(undefined8 *)((int)puVar2 + -0x6c) = puVar2[1];
        *(undefined8 *)((int)puVar2 + -0x74) = *puVar2;
        *(undefined8 *)((int)puVar2 + -0x5c) = puVar2[3];
        *(undefined8 *)((int)puVar2 + -100) = puVar2[2];
        *(undefined8 *)((int)puVar2 + -0x4c) = puVar2[5];
        *(undefined8 *)((int)puVar2 + -0x54) = puVar2[4];
        *(undefined8 *)((int)puVar2 + -0x3c) = puVar2[7];
        *(undefined8 *)((int)puVar2 + -0x44) = puVar2[6];
        *(undefined8 *)((int)puVar2 + -0x2c) = puVar2[9];
        *(undefined8 *)((int)puVar2 + -0x34) = puVar2[8];
        *(undefined8 *)((int)puVar2 + -0x1c) = puVar2[0xb];
        *(undefined8 *)((int)puVar2 + -0x24) = puVar2[10];
        *(undefined8 *)((int)puVar2 + -0xc) = puVar2[0xd];
        *(undefined8 *)((int)puVar2 + -0x14) = puVar2[0xc];
        *(undefined4 *)((int)puVar2 + -4) = *(undefined4 *)(puVar2 + 0xe);
        uVar4 = *puVar1;
      } while (param_2 < uVar4);
    }
    *puVar1 = uVar4 - 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

