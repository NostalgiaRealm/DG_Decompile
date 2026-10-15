/*
 * FUN_10006f80 at 10006f80
 * undefined FUN_10006f80(void)
 * Address ranges: 10006f80-10006ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006f80(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x909) == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x9cc);
    puVar1[0x109] = puVar1[1];
    puVar1[0x108] = *puVar1;
    puVar1[0x10b] = puVar1[3];
    puVar1[0x10a] = puVar1[2];
    puVar1[0x10d] = puVar1[5];
    puVar1[0x10c] = puVar1[4];
    puVar1[0x10f] = puVar1[7];
    puVar1[0x10e] = puVar1[6];
    iVar2 = *(int *)(param_1 + 0x9cc);
    uStack_48 = *(undefined8 *)(iVar2 + 0x848);
    local_50 = *(undefined8 *)(iVar2 + 0x840);
    uStack_38 = *(undefined8 *)(iVar2 + 0x858);
    uStack_40 = *(undefined8 *)(iVar2 + 0x850);
    uStack_28 = *(undefined8 *)(iVar2 + 0x868);
    local_30 = *(undefined8 *)(iVar2 + 0x860);
    uStack_18 = *(undefined8 *)(iVar2 + 0x878);
    uStack_20 = *(undefined8 *)(iVar2 + 0x870);
    FUN_100126d8(&local_50,(undefined8 *)(iVar2 + 0x840),0);
    *(char *)(param_1 + 0x909) = '\x01';
  }
  return;
}

