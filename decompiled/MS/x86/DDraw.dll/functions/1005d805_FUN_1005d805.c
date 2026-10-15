/*
 * FUN_1005d805 at 1005d805
 * undefined __thiscall FUN_1005d805(void * this, int param_1, uint param_2)
 * Address ranges: 1005d805-1005d914
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005d805(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x1b + (int)this) != '\0')) {
    piVar3 = (int *)((param_1 + -1) * 0x120 + *(int *)((int)this + 0x18));
    uVar1 = 0;
    do {
      if (param_2 == piVar3[uVar1 + 4]) {
        piVar3[uVar1 + 4] = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
    uVar1 = 0;
    do {
      if (piVar3[uVar1 + 4] != 0) {
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
    if (uVar1 == 4) {
      if (*(uint *)((int)this + 4) != 0) {
        param_2 = *(uint *)((int)this + 4);
LAB_1005d876:
        uVar1 = param_2 - 1;
        if (param_1 + -1 != *(int *)(*(int *)this + -4 + param_2 * 0x84)) goto code_r0x1005d88b;
        if (param_2 < *(uint *)((int)this + 4)) {
          do {
            puVar4 = (undefined4 *)(param_2 * 0x84 + *(int *)this);
            puVar5 = puVar4 + -0x21;
            for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            param_2 = param_2 + 1;
          } while (param_2 < *(uint *)((int)this + 4));
        }
        *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
      }
LAB_1005d8c0:
      iVar2 = DAT_1006903c;
      FUN_10060d80((undefined4 *)*piVar3,(undefined4 *)(DAT_1006903c + 0x20 + (int)piVar3),piVar3[2]
                  );
      if (piVar3[1] != 0) {
        FUN_10060d80((undefined4 *)piVar3[1],(undefined4 *)(iVar2 + 0xa0 + (int)piVar3),piVar3[3]);
      }
      FUN_10060d45(piVar3,0,0x120);
      *(undefined1 *)(param_1 + 0x1b + (int)this) = 0;
    }
  }
  return;
code_r0x1005d88b:
  param_2 = uVar1;
  if (uVar1 == 0) goto LAB_1005d8c0;
  goto LAB_1005d876;
}

