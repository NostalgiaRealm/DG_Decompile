/*
 * FUN_1002c636 at 1002c636
 * undefined1 __fastcall FUN_1002c636(byte * param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1002c636-1002c7cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1002c77d) */
/* WARNING: Removing unreachable block (ram,0x1002c7bf) */
/* WARNING: Removing unreachable block (ram,0x1002c7c1) */

undefined1 __fastcall FUN_1002c636(byte *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_9c;
  char local_9;
  
  bVar1 = FUN_1002c4a8(param_1,(byte *)"unforced",(byte *)0x10054423);
  if (bVar1) {
    *param_3 = 0;
    *param_2 = 0;
  }
  else {
    bVar1 = FUN_1002c4a8(param_1,&DAT_100563d4,(byte *)" max_%ux ");
    if (bVar1) {
      *param_3 = 0xffffffff;
      *param_2 = 0xffffffff;
    }
    else {
      bVar1 = FUN_1002c4a8(param_1,(byte *)"max_isf",(byte *)" max_isf_%ux ");
      if (bVar1) {
        uStack_9c = 0xfffffffe;
      }
      else {
        bVar1 = FUN_1002c4a8(param_1,(byte *)"max_fhd",(byte *)" max_fhd_%ux ");
        if (bVar1) {
          uStack_9c = 0xfffffffd;
        }
        else {
          bVar1 = FUN_1002c4a8(param_1,(byte *)"max_fhd_isf",(byte *)" max_fhd_isf_%ux ");
          if (bVar1) {
            uStack_9c = 0xfffffffc;
          }
          else {
            bVar1 = FUN_1002c4a8(param_1,(byte *)"max_qhd",(byte *)" max_qhd_%ux ");
            if (bVar1) {
              uStack_9c = 0xfffffffb;
            }
            else {
              bVar1 = FUN_1002c4a8(param_1,(byte *)"max_qhd_isf",(byte *)" max_qhd_isf_%ux ");
              if (bVar1) {
                uStack_9c = 0xfffffffa;
              }
              else {
                bVar1 = FUN_1002c4a8(param_1,(byte *)"desktop",(byte *)" desktop_%ux ");
                if (!bVar1) {
                  iVar2 = FUN_10052e41(param_1,(byte *)" %u%c%s ");
                  if (iVar2 != 2) {
                    return 0;
                  }
                  if (local_9 != 'x') {
                    return 0;
                  }
                  *param_2 = 0xfffffff9;
                  *param_3 = 0;
                  return 0;
                }
                uStack_9c = 0xfffffff8;
              }
            }
          }
        }
      }
      *param_3 = uStack_9c;
      *param_2 = uStack_9c;
    }
  }
  return 1;
}

