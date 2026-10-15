/*
 * FUN_100b8c50 at 100b8c50
 * undefined FUN_100b8c50(void)
 * Address ranges: 100b8c50-100b8d53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b8c50(int param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 auStack_58 [56];
  
  iVar1 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
  if (iVar1 == 0) {
    FUN_10006560(0);
  }
  local_98 = *(undefined4 *)(param_1 + -0x4db4);
  puVar2 = (undefined8 *)
           FUN_100041f0(*(undefined4 *)(param_1 + -0x4e14),auStack_58,param_2,
                        *(undefined4 *)(param_1 + -0x4dd8));
  uStack_8c = puVar2[1];
  uStack_94 = *puVar2;
  uStack_7c = puVar2[3];
  uStack_84 = puVar2[2];
  uStack_64 = *(undefined4 *)(puVar2 + 6);
  uStack_6c = puVar2[5];
  uStack_74 = puVar2[4];
  local_a0[0] = 0;
  local_60 = 0;
  iVar1 = FUN_10006f60(param_1 + -0x58e0,1,&local_98,local_a0,param_3,0);
  if (-1 < iVar1) {
    param_2[1] = uStack_8c;
    *param_2 = uStack_94;
    param_2[3] = uStack_7c;
    param_2[2] = uStack_84;
    param_2[5] = uStack_6c;
    param_2[4] = uStack_74;
    *(undefined4 *)(param_2 + 6) = uStack_64;
  }
  (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  return iVar1;
}

