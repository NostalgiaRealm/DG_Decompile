/*
 * FUN_100dfc20 at 100dfc20
 * undefined FUN_100dfc20(void)
 * Address ranges: 100dfc20-100dfd3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100dfc20(int param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined1 auStack_68 [56];
  
  iVar1 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
  if (iVar1 == 0) {
    FUN_100071d0(0);
  }
  iVar1 = -0x7789f794;
  if ((*(uint *)(param_1 + -0x58e4) >> 9 & 1) == 0) {
    local_a8 = *(undefined4 *)(param_1 + -0x58c4);
    puVar2 = (undefined8 *)
             FUN_10004b10(*(undefined4 *)(param_1 + -0x5924),auStack_68,param_2,
                          *(undefined4 *)(param_1 + -0x58e8));
    uStack_9c = puVar2[1];
    uStack_a4 = *puVar2;
    uStack_8c = puVar2[3];
    uStack_94 = puVar2[2];
    uStack_74 = puVar2[6];
    uStack_7c = puVar2[5];
    uStack_84 = puVar2[4];
    local_b0[0] = 0;
    local_6c = 0;
    iVar1 = FUN_10007b80(param_1 + -0x66b4,1,&local_a8,local_b0,param_3,0);
    if (-1 < iVar1) {
      param_2[1] = uStack_9c;
      *param_2 = uStack_a4;
      param_2[3] = uStack_8c;
      param_2[2] = uStack_94;
      param_2[5] = uStack_7c;
      param_2[4] = uStack_84;
      param_2[6] = uStack_74;
    }
  }
  (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  return iVar1;
}

