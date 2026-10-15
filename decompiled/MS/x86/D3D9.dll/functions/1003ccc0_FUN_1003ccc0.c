/*
 * FUN_1003ccc0 at 1003ccc0
 * undefined __thiscall FUN_1003ccc0(void * this, uint param_1)
 * Address ranges: 1003ccc0-1003cdc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003ccc0(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  char *pcVar11;
  
  if (param_1 != 0) {
    uVar10 = (int)param_1 >> 0x1f;
    uVar7 = FUN_10043ff0((void *)((int)this + 0xf8f0),param_1,uVar10);
    if (((uVar7 == *(uint *)((int)this + 0xf8f8)) ||
        (iVar3 = *(int *)((int)this + 0xf8f4), *(uint *)(iVar3 + uVar7 * 0x18) != param_1)) ||
       (*(uint *)(iVar3 + 4 + uVar7 * 0x18) != uVar10)) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = (char *)(iVar3 + 0xc + uVar7 * 0x18);
    }
    cVar9 = *pcVar11 + -1;
    *pcVar11 = cVar9;
    pcVar11[7] = pcVar11[7] | cVar9 == '\0';
    if ((cVar9 == '\0') && (pcVar11[2] == '\0')) {
      if (pcVar11[6] == '\0') {
        if (pcVar11[3] != '\0') {
          return;
        }
        if (pcVar11[4] != '\0') {
          return;
        }
        cVar9 = pcVar11[5];
      }
      else {
        cVar9 = pcVar11[3];
      }
      if ((cVar9 == '\0') && (pcVar11[1] == '\0')) {
        uVar8 = FUN_10043ff0((void *)((int)this + 0xf8f0),param_1,uVar10);
        uVar7 = *(uint *)((int)this + 0xf8f8);
        if ((uVar8 != uVar7) &&
           ((*(uint *)(*(int *)((int)this + 0xf8f4) + uVar8 * 0x18) == param_1 &&
            (*(uint *)(*(int *)((int)this + 0xf8f4) + 4 + uVar8 * 0x18) == uVar10)))) {
          uVar10 = uVar8 + 1;
          if (uVar8 + 1 < uVar7) {
            do {
              iVar3 = *(int *)((int)this + 0xf8f4);
              uVar8 = uVar10 + 1;
              puVar1 = (undefined4 *)(iVar3 + uVar10 * 0x18);
              uVar4 = puVar1[1];
              uVar5 = puVar1[2];
              uVar6 = puVar1[3];
              puVar2 = (undefined4 *)(iVar3 + -0x18 + uVar10 * 0x18);
              *puVar2 = *puVar1;
              puVar2[1] = uVar4;
              puVar2[2] = uVar5;
              puVar2[3] = uVar6;
              *(undefined8 *)(iVar3 + -8 + uVar10 * 0x18) =
                   *(undefined8 *)(iVar3 + 0x10 + uVar10 * 0x18);
              uVar7 = *(uint *)((int)this + 0xf8f8);
              uVar10 = uVar8;
            } while (uVar8 < uVar7);
          }
          *(uint *)((int)this + 0xf8f8) = uVar7 - 1;
        }
      }
    }
  }
  return;
}

