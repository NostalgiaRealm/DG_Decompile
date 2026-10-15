/*
 * FUN_10028084 at 10028084
 * undefined4 __thiscall FUN_10028084(void * this, int * param_1)
 * Address ranges: 10028084-1002823b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10028084(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_8;
  
  piVar3 = param_1;
  param_1 = (int *)0x80070057;
  iVar2 = piVar3[1];
  uVar4 = *(uint *)(iVar2 + 4);
  piVar5 = param_1;
  if (((((uVar4 & 0x20026) == 6) &&
       (piVar5 = (int *)0x88760064, (*(uint *)(iVar2 + 0x68) & 0x4000020) == 0)) &&
      (((*(uint *)(iVar2 + 0x68) & 0x200800) != 0x200000 ||
       (((*(byte *)(iVar2 + 0x68) & 0x24) != 0 &&
        ((*(uint *)(&DAT_10069938 + *(int *)((int)this + 0x11c) * 0xa4) & 0x200000) != 0)))))) &&
     (((*(byte *)(iVar2 + 0x68) & 4) == 0 || ((char)piVar3[6] != '\0')))) {
    local_8 = *(uint *)(iVar2 + 0xc);
    piVar5 = (int *)0x80070057;
    param_1 = (int *)0x80070057;
    if (local_8 == 0) {
      if (*(int *)(iVar2 + 8) == 0) {
        iVar6 = *piVar3;
        local_8 = *(uint *)(iVar6 + 0xc);
        *(uint *)(iVar2 + 0xc) = local_8;
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar6 + 8);
      }
      if (local_8 == 0) {
        return (int *)0x80070057;
      }
    }
    if ((((*(int *)(iVar2 + 8) != 0) && (local_8 < 0x4001)) && (*(uint *)(iVar2 + 8) < 0x4001)) &&
       ((uVar4 & 0x20000) == 0)) {
      if ((uVar4 & 0x1000) == 0) {
        *(uint *)(iVar2 + 4) = uVar4 | 0x1000;
        puVar7 = (undefined4 *)(&DAT_10069918 + *(int *)((int)this + 0x11c) * 0xa4);
        puVar8 = (undefined4 *)(iVar2 + 0x48);
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      uVar4 = 0;
      if ((*(byte *)(iVar2 + 0x4c) & 0x40) != 0) {
        uVar4 = *(int *)(iVar2 + 0x54) * local_8 >> 3;
      }
      iVar6 = piVar3[4];
      if ((iVar6 == 0) ||
         (((piVar5 = param_1, iVar6 == 0x808 || (iVar6 == 8)) &&
          ((piVar3[3] == 0 ||
           ((iVar6 == 8 && ((uVar4 == *(uint *)(iVar2 + 0x10) || (*(int *)(iVar2 + 0x10) == 0)))))))
          ))) {
        param_1 = (int *)0x88760091;
        *(undefined4 *)(iVar2 + 0x48) = 0x20;
        uVar4 = FUN_10031b38(this,iVar2);
        piVar3[7] = uVar4;
        if (uVar4 == 0xffffffff) {
          iVar2 = piVar3[1];
          iVar6 = FUN_10031d77(iVar2);
          piVar5 = param_1;
          if (iVar6 != -1) {
            puVar1 = (uint *)(iVar2 + 0x68);
            if (piVar3[2] == 0) {
              uVar4 = *puVar1;
              piVar3[3] = 0;
              *puVar1 = uVar4 & 0xcfffb7ff | 0x800;
            }
            if (piVar3[3] == 0) {
              *puVar1 = *puVar1 | 0x800;
              piVar3[7] = iVar6;
              *(undefined1 *)(piVar3 + 8) = 1;
            }
            piVar5 = (int *)0x0;
          }
        }
        else {
          piVar5 = (int *)0x0;
        }
      }
    }
  }
  return piVar5;
}

